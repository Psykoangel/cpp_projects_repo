#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "Trace.h"

#include "Constraint.h"
#include "StaticConstraint.h"
#include "VarConstraint.h"
#include "RecursiveConstraint.h"

class Action {
public:
  Action(int id, double weight);
  ~Action();
  void test();
  int addConstraint(Constraint *constraint);
  virtual double weightCalc();
  double Getweight() { return m_actualWeight; }

protected:
  int m_id, m_target;
  double m_weight, m_actualWeight;
  vector<Constraint *> constraintsList;
};

#endif // ACTION_H
