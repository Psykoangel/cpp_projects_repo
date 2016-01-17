#ifndef REACTION_H
#define REACTION_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "Action.h"
#include "Constraint.h"

#include "Trace.h"

class Reaction : public Action
{
    public:
        Reaction(int id, double weight, double* variable);
        virtual double weightCalc();
        int Getid() {return m_id; }

    protected:
        double* m_variable;
};

#endif // REACTION_H
