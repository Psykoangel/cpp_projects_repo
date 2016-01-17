#include "Action.h"

Action::Action(int id, double weight)
    : m_id(id), m_weight(weight), m_actualWeight(0) {}

Action::~Action() {
  /* -- Delete Actions -- */
  while (constraintsList.size() > 0) {
    delete constraintsList[0];
  }
}

int Action::addConstraint(Constraint *constraint) {
  constraintsList.push_back(constraint);

  return 0;
}

double Action::weightCalc() {

  TRACE("  Action " << m_id << " : " << m_weight)

  double weight = m_weight;

  for (int i = 0; i < constraintsList.size(); i++) {
    weight = constraintsList[i]->weightCalc(weight);
  }

  if (weight < 0)
    weight = 0;
  TRACE(" -> " << weight << endl)

  m_actualWeight = weight;

  return weight;
}
