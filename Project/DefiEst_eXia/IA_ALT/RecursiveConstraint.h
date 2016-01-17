#ifndef RECURSIVECONSTRAINT_H
#define RECURSIVECONSTRAINT_H

#include <vector>
#include "Constraint.h"

#include "Trace.h"

using namespace std;

class RecursiveConstraint : public Constraint {
public:
  RecursiveConstraint(int type = 1, double value = 0)
      : Constraint(type), m_initialValue(value) {}
  ~RecursiveConstraint();

  vector<Constraint *> GetconstraintList() { return m_constraintList; }
  void SetconstraintList(vector<Constraint *> val) { m_constraintList = val; }

  double GetinitialValue() { return m_initialValue; }
  void SetinitialValue(double initialValue) { m_initialValue = initialValue; }

  virtual double weightCalc(double weight);
  double ConstraintCalc(double weight);

  int addConstraint(Constraint *constraint);

protected:
private:
  vector<Constraint *> m_constraintList;
  double m_initialValue;
};

#endif // RECURSIVECONSTRAINT_H
