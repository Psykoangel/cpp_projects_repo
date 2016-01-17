#ifndef BOT_H
#define BOT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "StaticConstraint.h"
#include "VarConstraint.h"
#include "RecursiveConstraint.h"

#include "Constraint.h"
#include "Reaction.h"
#include "Action.h"
#include "IA.h"

#include "Relation.h"

#define ACTION_PRIM(id, weight)                                                \
  NewAction = new Action(id, weight);                                          \
  AIPrim->addAction(NewAction);                                                \
  NewAI = new IA();                                                            \
  AISec.push_back(NewAI);                                                      \
  code = id;

#define ACTION_SEC(id, weight)                                                 \
  NewAction = new Action(id, weight);                                          \
  NewAI->addAction(NewAction);                                                 \
  code = id;

// -- Reactions --

#define TARGET 0
#define SELF 1

#define REACTION(cible, variable, weight)                                      \
  NewAction = new Reaction(code, weight, variable);                            \
  Reaction[cible].push_back(NewAction);

// -- On Action's Contrainst --

#define STATIC(type, value)                                                    \
  NewConstraint = new StaticConstraint(type, value);                           \
  NewAction->addConstraint(NewConstraint);

#define VAR(type, value)                                                       \
  NewConstraint = new VarConstraint(type, value);                              \
  NewAction->addConstraint(NewConstraint);

#define RECURSIVE(type, value)                                                 \
  NewRecConstraint = new RecursiveConstraint(type, value);                     \
  NewAction->addConstraint(NewRecConstraint);

// -- On Constrainst's Contrainst --

#define REP(level) rep[level] = NewRecConstraint;

#define CSTATIC(type, value, level)                                            \
  NewConstraint = new StaticConstraint(type, value);                           \
  rep[level]->addConstraint(NewConstraint);

#define CVAR(type, value, level)                                               \
  NewConstraint = new VarConstraint(type, value);                              \
  rep[level]->addConstraint(NewConstraint);

#define CRECURSIVE(type, value, level)                                         \
  NewRecConstraint = new RecursiveConstraint(type, value);                     \
  rep[level]->addConstraint(NewRecConstraint)

#define ADD 1
#define FACT 2
#define SUP 3
#define INF 4
#define WHITE 5
#define DIV 6

#define GROUPE 1
#define TAPER 11
#define ORDONNER 12
#define SALUER 13
#define CADEAU 14
#define CADEAU_PIEGE 15

#define MIXTE 2
#define PARLER 21
#define CRIER 22
#define GEINDRE 23
#define RIRE 24
#define JOUER 25

#define SEUL 3
#define PROMENER 31
#define ATTIRER 32
#define EXPLORER 33
#define SE_NOURRIR 34
#define DORMIR 35

class Bot {
public:
  Bot();
  Bot(int x, int y);
  ~Bot();

  int decisionAction();
  void addRelation(int id);
  void delRelation(int id);

protected:
private:
  IA *AIPrim;
  vector<IA *> AISec;
  vector<string> liste[3];

  vector<Action *> reaction[2];

  vector<Relation *> relations;

  int coordx;
  int coordy;
  int direction;

  double sociability;
  double actionTendency;
  double temper;

  double mood;
  double energy;
  double hunger;

  int nbBotClose;
  int id_closestBot;
};

#endif // BOT_H
