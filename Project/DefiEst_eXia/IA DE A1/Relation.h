#ifndef RELATION_H
#define RELATION_H

#include <cmath>

#include "Bot.h"

class Relation {
private:
  int m_value, m_id, m_x, m_y;
  double m_distance;
  Bot *m_parent;

public:
  Relation(Bot *parent);
  ~Relation();

  bool inRange();
  void distanceCalc(int ax, int ay, int bx, int by);

  void changeRelationPlace(int x, int y);
  void distance();
  int Getid() { return m_id; }
  double Getdistance() { return m_distance; }
  bool occupied(int x, int y) { return (m_x == x && m_y == y) ? true : false; }

  int Getx() { return m_x; }
  int Gety() { return m_y; }
};

#endif // RELATION_H
