#include "Scene.h"

Scene::Scene()
{
    localBot = new Bot();
    bool continuer = true;
    int i = 0, size = 0;
    while(true)
    {
        size = externBots.size();
        if(i < size)
        {
            cout << "Bot " << i+1 << endl;
            localbot->applyDecision(TARGET, id_action);
            system("PAUSE");
        }
        else if (i == size)
        {
            cout << "LocalBot" << endl;
            localBot->decisionAction();
            system("PAUSE");
        }
        else
        {
            i = -1;
        }
        i++;
    }
}

Scene::~Scene()
{
    delete localBot;
}

/*

Si un bot externe change de place : localBot->changeRelationPlace(int id, int x, int y)
    Nouveau bot externe : localBot->addRelationPlace(int id)
    Suppression Bot externe : localBot->addRelationPlace(int id)
Si un bot cible le bot local : localbot->applyDecision(TARGET, id_action)
Quand le bot cible un bot externe : envoyer
    id_action = localBot->decisionAction();
    emplacement et direction : contact dans Relation.cpp (à interfacer et à appliquer sur le "closestBot" dont l'id est répertoriée dans le bot.cpp)

*/
