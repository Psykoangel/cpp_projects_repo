#include "Relation.h"

Relation::Relation(Bot *parent, int id, int x, int y)
    : m_parent(parent), m_id(id) {}

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

void changeRelationPlace(int x, int y) {
  m_x = x;
  m_y = y;
  distance();
}

void distance() {
  m_distance = distanceCalc(parent->Getx(), parent->Gety(), m_x, m_y);
}

void contact() {}
