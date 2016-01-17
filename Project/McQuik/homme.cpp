#include <string>
#include <iostream>

#include "Homme.h"

Homme::Homme(std::string add_nom, std::string add_prenom)
    : Perso(add_nom, add_prenom) {}

void Homme::dormir() {
  Perso::dormir();

  cout << " et je ronfle";
}

void Homme::faireAvec(int degre) {
  if (degre < 5) {
    cout << "Mince il faut que je fasse plus de betises" << endl;
  } else {
    cout << "je suis bete et jen suis fier" << endl;
  }
}
