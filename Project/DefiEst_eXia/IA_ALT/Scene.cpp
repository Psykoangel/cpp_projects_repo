#include "Scene.h"

Scene::Scene() {

  localBot = new Bot(1, 1, 1);
  bool continuer = true;
  int i = 0, size = 0;

  while (true) {
    size = externBots.size();

    if (i < size) {
      cout << "Bot " << i + 1 << endl << endl;
      localBot->applyReaction(TARGET, 11);
      system("PAUSE");

    } else if (i == size) {
      cout << "LocalBot" << endl << endl;
      // localBot->trace();
      localBot->decisionAction();
      TRACE(endl)
      localBot->trace();
      system("PAUSE");

    } else {
      i = -1;
    }

    i++;
  }
}

Scene::~Scene() { delete localBot; }

/*

Si un bot externe change de place : localBot->changeRelationPlace(int id, int x,
int y)
    Nouveau bot externe : localBot->addRelationPlace(int id)
    Suppression Bot externe : localBot->addRelationPlace(int id)
Si un bot cible le bot local : localbot->applyDecision(TARGET, id_action)
Quand le bot cible un bot externe : envoyer
    id_action = localBot->decisionAction();
    emplacement et direction : contact dans Relation.cpp (a interfacer et a
appliquer sur le "closestBot" dont l'id est repertoriee dans le bot.cpp)

*/
