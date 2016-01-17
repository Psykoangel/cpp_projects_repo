#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main() {
  // Creation des personnages
  Personnage david, goliath("Epee aiguisee", 20);

  // Au combat !
  goliath.attaquer(david);
  david.boirePotionDeVie(20);
  goliath.attaquer(david);
  david.attaquer(goliath);
  goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
  goliath.attaquer(david);

  cout << "David" << endl;
  david.afficherEtat();
  cout << endl << "Goliath" << endl;
  goliath.afficherEtat();

  return 0;
}
