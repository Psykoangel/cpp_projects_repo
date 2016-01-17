#include "VarConstraint.h"

double VarConstraint::weightCalc(double weight)
{
    // Choice of Constraint's action
    if(m_variable != 0)
    {
        switch(m_type)
        {
            case 1 :
            {
                weight += *m_variable;
                TRACE("+" << *m_variable)
            }   break;
            case 2 :
            {
                weight *= *m_variable;
                TRACE("*" << *m_variable)
            }   break;
            case 3 :
            {
                if(weight > *m_variable)
                    weight = *m_variable;
                TRACE(" |<" << *m_variable << "| ")
            }   break;
            case 4 :
            {
                if(weight < *m_variable)
                    weight = *m_variable;
                TRACE(" |<" << *m_variable << "| ")
            }   break;
            case 5:
            {
                weight = *m_variable;
                TRACE(" |=" << *m_variable << "| ")
            }   break;
            case 6:
            {
                weight /= *m_variable;
                TRACE("/" << *m_variable)
            }   break;
        }
    }

    return weight;
}
