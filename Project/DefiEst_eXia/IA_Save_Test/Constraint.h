#ifndef CONSTRAINT_H
#define CONSTRAINT_H

#include "Trace.h"

class Constraint
{
    public:
        Constraint(int type) : m_type(type) {}
        Constraint() : m_type(5) {}
        ~Constraint() {}

        virtual double weightCalc(double weight) { return weight; }

    private:
    protected:
        int m_type;
};

#endif // CONSTRAINT_H
