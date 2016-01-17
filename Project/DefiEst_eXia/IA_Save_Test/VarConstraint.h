#ifndef VARCONSTRAINT_H
#define VARCONSTRAINT_H

#include "Constraint.h"
#include "Trace.h"


class VarConstraint : public Constraint
{
    public:
        VarConstraint(int type = 5, double* variable = 0) : Constraint(type), m_variable(variable) {}
        double* Getvariable() { return m_variable; }
        void Setvariable(double* val) { m_variable = val; }

        virtual double weightCalc(double weight);

    protected:
    private:
        double* m_variable;
};

#endif // VARCONSTRAINT_H
