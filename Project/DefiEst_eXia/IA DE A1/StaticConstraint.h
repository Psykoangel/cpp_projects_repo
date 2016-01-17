#ifndef STATICCONSTRAINT_H
#define STATICCONSTRAINT_H

#include "Constraint.h"
#include "Trace.h"

class StaticConstraint : public Constraint {
public:
  StaticConstraint(int type = 1, double value = 0)
      : Constraint(type), m_value(value) {}
  double Getvalue() { return m_value; }
  void Setvalue(double val) { m_value = val; }

  virtual double weightCalc(double weight);

protected:
private:
  double m_value;
};

#endif // STATICCONSTRAINT_H
