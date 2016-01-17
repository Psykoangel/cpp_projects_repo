#include "IA.h"

IA::IA()
{
}

IA::~IA()
{
    /* -- Delete Actions -- */
    while(actions.size()>0)
    {
        delete actions[0];
    }
}

int IA::decisionCalc()
{
    TRACE("Activation AI --" << endl)
    int retour = -1;

    /* -- Calculating of the weight's sum -- */
    int sum = 0;
    for(int i=0; i<actions.size(); i++)
    {
        actions[i]->test();
        double result = actions[i]->weightCalc();
    }

    if(sum > 0)
    {
        /* -- Epic Random function -- */
        int random = rand() % sum + 1;

        /* -- Action's Choice -- */
        int incProba = 1;
        for(int i=0; i<actions.size(); i++)
        {
            incProba += (int) actions[i]->Getweight();

            if(incProba > random)
            {
                retour = i;
                break;
            }
        }

        TRACE("AI's choice : " << retour+1 << endl << endl)
    }
    return retour;
}

int IA::addAction( Action* action )
{
    actions.push_back(action);
    return 0;
}
