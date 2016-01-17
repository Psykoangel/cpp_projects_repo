#include "Reaction.h"

Reaction::Reaction(int id, double weight, double *variable)
    : Action(id, weight), m_variable(variable) {}

double Reaction::weightCalc() {
  TRACE("  Reaction " << m_id << " : " << m_weight)

  double weight = m_weight;
  for (int i = 0; i < constraintsList.size(); i++) {
    weight = constraintsList[i]->weightCalc(weight);
  }

  TRACE(" -> " << weight << endl)

  // Application
  *m_variable += weight;
  if (*m_variable < 0)
    *m_variable = 0;
  if (*m_variable > 10)
    *m_variable = 10;

  m_actualWeight = weight;

  return weight;
}
