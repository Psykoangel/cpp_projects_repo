#include "Relation.h"

Relation::Relation(int *x, int *y, int id) : p_x(x), p_y(y), m_id(id) {}

Relation::~Relation() {
  // dtor
}

bool Relation::inRange() {
  if (m_distance > 2.90) {
    return true;

  } else {
    return false;
  }
}

void Relation::distanceCalc(int ax, int ay, int bx, int by) {
  m_distance = sqrtf(powf(bx - ax, 2) + powf(by - ay, 2));
}

void Relation::changeRelationPlace(int x, int y) {
  m_x = x;
  m_y = y;
  distance();
}

void Relation::distance() { distanceCalc(*p_x, *p_y, m_x, m_y); }

void Relation::contact() {
  int x = *p_x, y = *p_y, directionx = 0, directiony;

  if (x != m_x) {
    int difx = m_x - x;
    if (difx > 0) {
      x = m_x - 1;
      directionx = +1;

    } else {
      x = m_x + 1;
      directionx = -1;
    }
    y = m_y;

  } else {
    int dify = m_y - y;
    if (dify > 0) {
      y = m_y - 1;
      directiony = +1;

    } else {
      y = m_y + 1;
      directiony = -1;
    }
    x = m_x;
  }
}
