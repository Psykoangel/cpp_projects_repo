#include "Bot.h"

Bot::Bot(int x, int y, int id) : coordx(x), coordy(y), m_id(id) {
  /* -- Initialisation of Bot's Variable -- */
  sociability = (rand() % 11);
  actionTendency = (rand() % 11);
  temper = (rand() % 11);

  mood = (rand() % 11);
  energy = (rand() % 11);
  hunger = (rand() % 11);

  /* -- AI's Declaration -- */
  AIPrim = new IA();
  IA *NewAI = NULL;

  /* -- Action's Declaration -- */
  Action *NewAction = NULL;
  Constraint *NewConstraint = NULL;
  RecursiveConstraint *NewRecConstraint = NULL;

  vector<RecursiveConstraint *> rep(3);
  int code = 0;

  liste[0].push_back("Taper");
  liste[0].push_back("Ordonner");
  liste[0].push_back("Saluer");
  liste[0].push_back("Cadeau");
  liste[0].push_back("Cadeau piege");

  liste[1].push_back("Parler");
  liste[1].push_back("Crier");
  liste[1].push_back("Geindre");
  liste[1].push_back("Rire");
  liste[1].push_back("Jouer");

  liste[2].push_back("Promener");
  liste[2].push_back("Attirer");
  liste[2].push_back("Explorer");
  liste[2].push_back("Manger");
  liste[2].push_back("Dormir");

  /* -- Action List -- */
  ACTION_PRIM(GROUPE, 0)
  RECURSIVE(ADD, 20)
  REP(0)
  CVAR(FACT, &nbBotClose, 0)

  ACTION_SEC(TAPER, 18)
  RECURSIVE(ADD, -1) REP(0) CVAR(FACT, &temper, 0) CVAR(ADD, &mood, 0)
      CSTATIC(ADD, 5, 0) CSTATIC(FACT, 4, 0)

          REACTION(TARGET, &mood, -4) REACTION(TARGET, &energy, -1)
              REACTION(SELF, &mood, +1) REACTION(SELF, &energy, -1)
                  REACTION(SELF, &hunger, +1)

                      ACTION_SEC(ORDONNER, 10) RECURSIVE(ADD, 0) REP(0)
                          CVAR(ADD, &temper, 0) CVAR(ADD, &mood, 0)
                              CVAR(ADD, &actionTendency, 0)
                                  CSTATIC(FACT, 2, 0)

                                      REACTION(TARGET, &mood, +1)
                                          REACTION(SELF, &hunger, +1)

                                              ACTION_SEC(SALUER, 15)
                                                  RECURSIVE(ADD, 0)
                                                      REP(0)
                                                          CVAR(ADD,
                                                               &sociability, 0)
                                                              CVAR(ADD, &temper,
                                                                   0)
                                                                  CVAR(ADD,
                                                                       &mood, 0)
                                                                      CSTATIC(
                                                                          DIV, 2, 0)
                                                                          CVAR(
                                                                              FACT, &energy, 0)
                                                                              CSTATIC(FACT, 0.4, 0)
                                                                                  CSTATIC(ADD, 5, 0)

                                                                                      REACTION(TARGET,
                                                                                               &mood,
                                                                                               +1) REACTION(SELF,
                                                                                                            &mood,
                                                                                                            +1)
                                                                                          REACTION(SELF, &energy, -1)

                                                                                              ACTION_SEC(
                                                                                                  CADEAU, 12)
                                                                                                  RECURSIVE(
                                                                                                      ADD,
                                                                                                      0)
                                                                                                      REP(0) CVAR(ADD, &sociability, 0) CVAR(ADD, &temper, 0) CVAR(ADD, &mood, 0) CVAR(ADD, &actionTendency, 0) CRECURSIVE(FACT, 1, 0)
                                                                                                          REP(1) CVAR(FACT, &energy, 1)
                                                                                                              CSTATIC(ADD, -1, 1) CSTATIC(DIV, 6, 0)

                                                                                                                  REACTION(TARGET,
                                                                                                                           &mood, +4) REACTION(SELF,
                                                                                                                                               &energy, -2) REACTION(SELF,
                                                                                                                                                                     &hunger, +1)

                                                                                                                      ACTION_SEC(CADEAU_PIEGE, 12) RECURSIVE(ADD, -1) REP(0) CVAR(FACT, &sociability, 0) CSTATIC(ADD, 10, 0) CVAR(ADD,
                                                                                                                                                                                                                                  &temper,
                                                                                                                                                                                                                                  0) CVAR(ADD,
                                                                                                                                                                                                                                          &mood, 0) CVAR(ADD,
                                                                                                                                                                                                                                                         &actionTendency,
                                                                                                                                                                                                                                                         0) CRECURSIVE(FACT, 1, 0)
                                                                                                                          REP(1) CVAR(FACT, &energy, 1)
                                                                                                                              CSTATIC(ADD, -1, 1) CSTATIC(DIV, 6, 0)

                                                                                                                                  REACTION(TARGET, &mood, -3) REACTION(SELF, &mood, +1)
                                                                                                                                      REACTION(SELF, &energy, -2)
                                                                                                                                          REACTION(SELF, &hunger, +1)

                                                                                                                                              ACTION_PRIM(
                                                                                                                                                  MIXTE,
                                                                                                                                                  50) RECURSIVE(ADD,
                                                                                                                                                                10)
                                                                                                                                                  REP(0) CVAR(
                                                                                                                                                      FACT,
                                                                                                                                                      &nbBotClose, 0)

                                                                                                                                                      ACTION_SEC(PARLER,
                                                                                                                                                                 50) RECURSIVE(ADD,
                                                                                                                                                                               0) REP(0) CVAR(ADD,
                                                                                                                                                                                              &sociability,
                                                                                                                                                                                              0) CVAR(ADD, &temper, 0) CSTATIC(DIV, 2, 0) CVAR(FACT,
                                                                                                                                                                                                                                               &energy, 0) CSTATIC(FACT,
                                                                                                                                                                                                                                                                   0.4,
                                                                                                                                                                                                                                                                   0) CSTATIC(ADD,
                                                                                                                                                                                                                                                                              5, 0)

                                                                                                                                                          REACTION(
                                                                                                                                                              TARGET,
                                                                                                                                                              &mood,
                                                                                                                                                              +1) REACTION(SELF,
                                                                                                                                                                           &mood,
                                                                                                                                                                           +1)

                                                                                                                                                              ACTION_SEC(CRIER, 50) RECURSIVE(ADD, 0) REP(0) CVAR(ADD,
                                                                                                                                                                                                                  &temper,
                                                                                                                                                                                                                  0)
                                                                                                                                                                  CVAR(ADD, &actionTendency, 0) CSTATIC(FACT,
                                                                                                                                                                                                        2, 0)

                                                                                                                                                                      REACTION(TARGET,
                                                                                                                                                                               &mood,
                                                                                                                                                                               -2) REACTION(SELF, &energy, -1) REACTION(SELF,
                                                                                                                                                                                                                        &hunger,
                                                                                                                                                                                                                        +1)

                                                                                                                                                                          ACTION_SEC(
                                                                                                                                                                              GEINDRE,
                                                                                                                                                                              50)
                                                                                                                                                                              RECURSIVE(ADD,
                                                                                                                                                                                        -1) REP(0) CVAR(FACT,
                                                                                                                                                                                                        &temper, 0)
                                                                                                                                                                                  CSTATIC(
                                                                                                                                                                                      ADD,
                                                                                                                                                                                      5,
                                                                                                                                                                                      0)
                                                                                                                                                                                      CSTATIC(
                                                                                                                                                                                          FACT,
                                                                                                                                                                                          4,
                                                                                                                                                                                          0)

                                                                                                                                                                                          REACTION(TARGET,
                                                                                                                                                                                                   &mood, -1) REACTION(SELF,
                                                                                                                                                                                                                       &energy, -1) REACTION(SELF,
                                                                                                                                                                                                                                             &hunger,
                                                                                                                                                                                                                                             +2)

                                                                                                                                                                                              ACTION_SEC(RIRE, 50) STATIC(FACT, 2) RECURSIVE(ADD,
                                                                                                                                                                                                                                             0) REP(0) CVAR(ADD,
                                                                                                                                                                                                                                                            &actionTendency,
                                                                                                                                                                                                                                                            0) CSTATIC(DIV,
                                                                                                                                                                                                                                                                       3,
                                                                                                                                                                                                                                                                       0) CVAR(FACT,
                                                                                                                                                                                                                                                                               &energy,
                                                                                                                                                                                                                                                                               0)

                                                                                                                                                                                                  REACTION(
                                                                                                                                                                                                      TARGET, &mood, +2) REACTION(SELF,
                                                                                                                                                                                                                                  &mood, +2) REACTION(SELF,
                                                                                                                                                                                                                                                      &hunger,
                                                                                                                                                                                                                                                      +1)

                                                                                                                                                                                                      ACTION_SEC(
                                                                                                                                                                                                          JOUER,
                                                                                                                                                                                                          12)
                                                                                                                                                                                                          STATIC(FACT, 2) RECURSIVE(ADD,
                                                                                                                                                                                                                                    0) REP(0) CVAR(ADD,
                                                                                                                                                                                                                                                   &actionTendency, 0) CSTATIC(DIV, 3, 0) CVAR(FACT,
                                                                                                                                                                                                                                                                                               &energy,
                                                                                                                                                                                                                                                                                               0)

                                                                                                                                                                                                              REACTION(
                                                                                                                                                                                                                  TARGET, &mood, +2) REACTION(SELF, &mood, +2) REACTION(TARGET, &energy, -2) REACTION(SELF, &energy, -2) REACTION(TARGET,
                                                                                                                                                                                                                                                                                                                                  &hunger,
                                                                                                                                                                                                                                                                                                                                  +1) REACTION(SELF,
                                                                                                                                                                                                                                                                                                                                               &hunger,
                                                                                                                                                                                                                                                                                                                                               +1)

                                                                                                                                                                                                                  ACTION_PRIM(SEUL, 100) RECURSIVE(ADD,
                                                                                                                                                                                                                                                   -20) REP(0) CVAR(FACT, &nbBotClose,
                                                                                                                                                                                                                                                                    0)

                                                                                                                                                                                                                      ACTION_SEC(
                                                                                                                                                                                                                          PROMENER,
                                                                                                                                                                                                                          11)
                                                                                                                                                                                                                          RECURSIVE(
                                                                                                                                                                                                                              ADD,
                                                                                                                                                                                                                              0) REP(0)
                                                                                                                                                                                                                              CVAR(ADD, &actionTendency, 0) CVAR(ADD,
                                                                                                                                                                                                                                                                 &temper, 0) CVAR(ADD,
                                                                                                                                                                                                                                                                                  &mood, 0) CVAR(FACT,
                                                                                                                                                                                                                                                                                                 &hunger,
                                                                                                                                                                                                                                                                                                 0)
                                                                                                                                                                                                                                  CRECURSIVE(DIV, 1, 0) REP(1) CVAR(ADD,
                                                                                                                                                                                                                                                                    &energy,
                                                                                                                                                                                                                                                                    1)
                                                                                                                                                                                                                                      CRECURSIVE(
                                                                                                                                                                                                                                          FACT,
                                                                                                                                                                                                                                          0,
                                                                                                                                                                                                                                          0)
                                                                                                                                                                                                                                          REP(1)
                                                                                                                                                                                                                                              CVAR(ADD, &actionTendency,
                                                                                                                                                                                                                                                   1) CVAR(ADD,
                                                                                                                                                                                                                                                           &sociability,
                                                                                                                                                                                                                                                           1)

                                                                                                                                                                                                                                                  REACTION(SELF, &energy, -1) REACTION(SELF,
                                                                                                                                                                                                                                                                                       &hunger,
                                                                                                                                                                                                                                                                                       +1)

                                                                                                                                                                                                                                                      ACTION_SEC(
                                                                                                                                                                                                                                                          ATTIRER, 11) STATIC(FACT,
                                                                                                                                                                                                                                                                              3) RECURSIVE(ADD, 1) REP(0) CVAR(ADD,
                                                                                                                                                                                                                                                                                                               &actionTendency, 0) CRECURSIVE(DIV,
                                                                                                                                                                                                                                                                                                                                              1,
                                                                                                                                                                                                                                                                                                                                              0)
                                                                                                                                                                                                                                                          REP(1)
                                                                                                                                                                                                                                                              CVAR(
                                                                                                                                                                                                                                                                  ADD, &energy, 1) CRECURSIVE(FACT,
                                                                                                                                                                                                                                                                                              2,
                                                                                                                                                                                                                                                                                              0)
                                                                                                                                                                                                                                                                  REP(1)
                                                                                                                                                                                                                                                                      CRECURSIVE(
                                                                                                                                                                                                                                                                          FACT,
                                                                                                                                                                                                                                                                          0, 1) REP(2) CVAR(ADD, &temper,
                                                                                                                                                                                                                                                                                            2)
                                                                                                                                                                                                                                                                          CVAR(
                                                                                                                                                                                                                                                                              ADD,
                                                                                                                                                                                                                                                                              &mood, 2) CVAR(ADD,
                                                                                                                                                                                                                                                                                             &actionTendency, 2)

                                                                                                                                                                                                                                                                              REACTION(SELF,
                                                                                                                                                                                                                                                                                       &energy, -1) REACTION(SELF,
                                                                                                                                                                                                                                                                                                             &hunger, -1)

                                                                                                                                                                                                                                                                                  ACTION_SEC(
                                                                                                                                                                                                                                                                                      EXPLORER,
                                                                                                                                                                                                                                                                                      11) STATIC(ADD,
                                                                                                                                                                                                                                                                                                 6) RECURSIVE(ADD,
                                                                                                                                                                                                                                                                                                              1) REP(0)
                                                                                                                                                                                                                                                                                      CVAR(ADD, &actionTendency, 0) CVAR(ADD,
                                                                                                                                                                                                                                                                                                                         &sociability, 0)
                                                                                                                                                                                                                                                                                          CRECURSIVE(
                                                                                                                                                                                                                                                                                              DIV,
                                                                                                                                                                                                                                                                                              1,
                                                                                                                                                                                                                                                                                              0)
                                                                                                                                                                                                                                                                                              REP(1)
                                                                                                                                                                                                                                                                                                  CVAR(
                                                                                                                                                                                                                                                                                                      ADD,
                                                                                                                                                                                                                                                                                                      &energy,
                                                                                                                                                                                                                                                                                                      1)
                                                                                                                                                                                                                                                                                                      CVAR(
                                                                                                                                                                                                                                                                                                          ADD,
                                                                                                                                                                                                                                                                                                          &hunger,
                                                                                                                                                                                                                                                                                                          1) CRECURSIVE(FACT,
                                                                                                                                                                                                                                                                                                                        5, 0)
                                                                                                                                                                                                                                                                                                          REP(1) CVAR(ADD, &temper, 1) CVAR(ADD,
                                                                                                                                                                                                                                                                                                                                            &mood,
                                                                                                                                                                                                                                                                                                                                            1)

                                                                                                                                                                                                                                                                                                              ACTION_SEC(SE_NOURRIR, 11) RECURSIVE(ADD,
                                                                                                                                                                                                                                                                                                                                                   2) REP(0)
                                                                                                                                                                                                                                                                                                                  CVAR(
                                                                                                                                                                                                                                                                                                                      FACT,
                                                                                                                                                                                                                                                                                                                      &hunger,
                                                                                                                                                                                                                                                                                                                      0)

                                                                                                                                                                                                                                                                                                                      REACTION(
                                                                                                                                                                                                                                                                                                                          SELF,
                                                                                                                                                                                                                                                                                                                          &hunger,
                                                                                                                                                                                                                                                                                                                          -3)

                                                                                                                                                                                                                                                                                                                          ACTION_SEC(
                                                                                                                                                                                                                                                                                                                              DORMIR, 11) RECURSIVE(ADD,
                                                                                                                                                                                                                                                                                                                                                    2) REP(0) CVAR(FACT,
                                                                                                                                                                                                                                                                                                                                                                   &energy,
                                                                                                                                                                                                                                                                                                                                                                   0)

                                                                                                                                                                                                                                                                                                                              REACTION(
                                                                                                                                                                                                                                                                                                                                  SELF,
                                                                                                                                                                                                                                                                                                                                  &energy,
                                                                                                                                                                                                                                                                                                                                  +1)
}

Bot::~Bot() {
  delete AIPrim;

  while (AISec.size() > 0) {
    delete AISec[0];
  }

  for (int i = 0; i < 2; i++) {
    while (reaction[i].size() > 0) {
      delete reaction[i][0];
    }
  }
}

void Bot::trace() {
  TRACE("Bot " << m_id << " - Coordonees (" << coordx << ", " << coordy << ")"
               << endl)
  TRACE(" - Humeur : " << mood << endl)
  TRACE(" - Energie : " << energy << endl)
  TRACE(" - Faim : " << hunger << endl << endl)
}

int Bot::decisionAction() {
  /* Variable's calc */

  // Number of close bot --
  nbBotClose = 0;
  for (int i = 0; i < relations.size(); i++) {
    if (relations[i]->inRange() == m_id) {
      nbBotClose++;
    }
  }

  // Closest Bot --
  if (relations.size() > 1) {
    double distance = 0;
    id_closestBot = relations[0]->Getid();
    distance = relations[0]->Getdistance();

    for (int i = 1; i < relations.size(); i++) {
      if (relations[i]->Getdistance() < distance) {
        id_closestBot = relations[i]->Getid();
        distance = relations[i]->Getdistance();
      }
    }
  } else {
    id_closestBot = -1;
  }

  /* -- Primary AI -- */
  int ai_sec = AIPrim->decisionCalc();

  /* -- Secondary AI -- */
  if (ai_sec != -1) {
    int decision = AISec[ai_sec]->decisionCalc();
    cout << liste[ai_sec][decision] << endl;
    int id_action = (ai_sec + 1) * 10 + (decision + 1);

    /* Apply Self Reaction */
    applyReaction(SELF, id_action);
    return decision;
  } else {
    TRACE("Erreur : pas de choix." << endl)
  }
}

/* Apply Reaction */

void Bot::applyReaction(int cible, int id) {
  if (cible == SELF or cible == TARGET) {
    for (int i = 0; i < reaction[cible].size(); i++) {
      if (reaction[cible][i]->Getid() == id) {
        reaction[cible][i]->weightCalc();
      }
    }
  }
}

/* On Relation Action */
void Bot::addRelation(int id) {
  delRelation(id);
  relations.push_back(new Relation(&coordx, &coordy, id));
}

void Bot::changeRelationPlace(int id, int x, int y) {
  for (int i = 0; i < relations.size(); i++) {
    if (relations[i]->Getid() == id) {
      relations[i]->changeRelationPlace(x, y);
    }
  }
}

void Bot::changeBotPlace(int id, int x, int y) {
  for (int i = 0; i < relations.size(); i++) {
    relations[i]->distance();
  }
}

void Bot::delRelation(int id) {
  for (vector<Relation *>::iterator i = relations.begin(); i != relations.end();
       i++) {
    if ((*i)->Getid() == id) {
      relations.erase(i);
    }
  }
}

/* Travelling */
void Bot::promener() {
  bool valide = false, attempt;
  while (!valide) {
    attempt = true;
    int dirx = rand() % 3 - 1, diry = rand() % 3 - 1, distance = rand() % 6 + 1,
        x = coordx, y = coordy;
    for (int i = 0; i < distance; i++) {
      x += dirx;
      y += diry;
      for (int j = 0; j < relations.size(); j++) {
        if (relations[j]->occupied(x, y))
          attempt = false;
      }
    }

    if (attempt = true)
      valide = true;
  }
}
