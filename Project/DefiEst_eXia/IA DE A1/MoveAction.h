#ifndef MOVEACTION_H
#define MOVEACTION_H

#include <iostream>
#include <vector>
#include <string>

#include "relation.h"
using namespace std;

class MoveAction {
public:
  MoveAction(int *x, int *y, vector<Relation *> *relations);

  int Aleatoire();
  int Exploration();
  int Destination(int x, int y);

  bool isMovable();
  bool isFree(int x, int y);

protected:
private:
  int *m_x, *m_y;
  vector<Relation *> *m_relations;
  vector<string> m_reserved;
};

#endif // MOVEACTION_H
