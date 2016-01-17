#ifndef IA_H
#define IA_H

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

#include "Action.h"

#include "Trace.h"

class IA
{
    protected:
        vector<Action*> actions;

    public:
        IA();
        ~IA();

        int decisionCalc();
        int addAction( Action* action );

};

#endif // IA_H
