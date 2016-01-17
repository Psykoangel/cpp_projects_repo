#include "MoveAction.h"

MoveAction::MoveAction(int *x, int *y, vector<Relation *> *relations)
    : m_x(x), m_y(y), m_relations(relations) {}

int MoveAction::Aleatoire() {
  int i = 0;
  if (isMovable()) {
    bool valide = false, attempt;
    while (!valide && i < 100) {
      attempt = true;
      int dirx = rand() % 3 - 1, diry = rand() % 3 - 1,
          distance = rand() % 6 + 1, x = *m_x, y = *m_y;
      for (int i = 0; i < distance; i++) {
        x += dirx;
        y += diry;
        if (!isFree(x, y))
          attempt = false;
      }

      // Application --
      if (attempt = true) {
        valide = true;
        *m_x = x;
        *m_y = x;
      }
      i++;
    }
  }
}

int MoveAction::Exploration() {
  int Nb = rand() % 4 + 2;
  for (int i = 0; i < Nb; i++) {
    Aleatoire();
  }
}

int MoveAction::Destination(int x, int y) {
  double best_distance = -1, distance = -1;
  int best_x = 0, best_y = 0;

  for (int i = -1; i < 1; i++) {
    for (int j = -1; j < 1; j++) {
      if (i != 0 or j != 0) {
        distance = sqrtf(powf(x - *m_x, 2) +
                         powf(y - *m_y, 2)) if (isFree(x + i, y + j) &&
                                                distance < best_distance) {
          best_distance = distance;
          best_x = i;
          best_y = j;
        }
      }
    }
  }

  if (best_distance != -1) {
    *m_x = best_x;
    *m_y = best_x;
  }
}

bool isMovable() {
  bool movable = false;
  for (int i = -1; i < 1 and !movable; i++) {
    for (int j = -1; j < 1 and !movable; j++) {
      if (i != 0 or j != 0)
        if (isFree(*m_x + i, *m_x + j))
          movable = true;
    }
  }
}

bool isFree(int x, int y) {
  // Limits --
  if (x > 100 or x < -100 or x > 100 or x < -100) {
    free = false;
  }

  // Reserved --
  string coord =
      new string(x + "|" + y) for (int j = 0; j < reserved->size(); j++) {
    if (coord == reserved[j])
      free = false;
  }

  // Is a relation here ?
  bool free = true;
  for (int j = 0; j < relations->size(); j++) {
    if (relations[j]->occupied(x, y))
      free = false;
  }
}
