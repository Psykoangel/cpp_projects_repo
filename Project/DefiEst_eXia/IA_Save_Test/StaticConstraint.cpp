#include "StaticConstraint.h"

double StaticConstraint::weightCalc(double weight)
{
    // Choice of Constraint's action

    switch(m_type)
    {
        case 1 :
        {
            weight += m_value;
            TRACE("+" << m_value)
        }   break;
        case 2 :
        {
            weight *= m_value;
            TRACE("*" << m_value)
        }   break;
        case 3 :
        {
            if(weight > m_value)
                weight = m_value;
            TRACE(" |>" << m_value << "| ")
        }   break;
        case 4 :
        {
            if(weight < m_value)
                weight = m_value;
            TRACE(" |<" << m_value << "| ")
        }   break;
        case 5:
        {
            weight = m_value;
            TRACE(" |=" << m_value << "| ")
        }   break;
        case 6:
        {
            weight /= m_value;
            TRACE("/" << m_value)
        }   break;
    }

    return weight;
}
