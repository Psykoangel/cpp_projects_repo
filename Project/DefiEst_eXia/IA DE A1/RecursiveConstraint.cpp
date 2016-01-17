#include "RecursiveConstraint.h"

RecursiveConstraint::~RecursiveConstraint() {
  /* -- Delete Actions -- */
  while (m_constraintList.size() > 0) {
    delete m_constraintList[0];
  }
}

double RecursiveConstraint::weightCalc(double weight) {
  // Choice of Constraint's action
  double value = m_initialValue;

  switch (m_type) {
  case 1: {
    TRACE("+(" << value)
    weight += ConstraintCalc(value);
  } break;
  case 2: {
    TRACE("*(" << value)
    weight *= ConstraintCalc(value);
  } break;
  case 3: {
    TRACE(" |>(" << value)
    if (weight > value)
      weight = value;
    TRACE("| ")
  } break;
  case 4: {
    TRACE(" |<(" << value)
    if (weight < value)
      weight = value;
    TRACE("| ")
  } break;
  case 5: {
    TRACE(" |=(" << value)
    weight = value;
    TRACE("| ")
  } break;
  case 6: {
    weight /= value;
    TRACE("/" << value)
  } break;
  }
  TRACE(")")

  return weight;
}

double RecursiveConstraint::ConstraintCalc(double weight) {
  // Calcul of weight

  for (int i = 0; i < m_constraintList.size(); i++) {
    weight = m_constraintList[i]->weightCalc(weight);
  }

  return weight;
}

int RecursiveConstraint::addConstraint(Constraint *constraint) {
  m_constraintList.push_back(constraint);
}
