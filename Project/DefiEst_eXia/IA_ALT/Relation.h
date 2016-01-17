#ifndef RELATION_H
#define RELATION_H

using namespace std;

#include <cmath>

#include "Constraint.h"

class Relation {
private:
  int m_value, m_id, m_x, m_y;
  int *p_x, *p_y;
  double m_distance;

public:
  Relation(int *x, int *y, int id);
  ~Relation();

  bool inRange();
  void distanceCalc(int ax, int ay, int bx, int by);
  void changeRelationPlace(int x, int y);
  void distance();
  void contact();

  int Getid() { return m_id; }
  double Getdistance() { return m_distance; }
  bool occupied(int x, int y) { return (m_x == x && m_y == y) ? true : false; }
};

#endif // RELATION_H
