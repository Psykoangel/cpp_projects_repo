#include <string>
#include <iostream>

#include "femme.h"

Femme::Femme(std::string add_nom, std::string add_prenom)
    : Perso(add_nom, add_prenom) {}

void Femme::dormir() {
  Perso::dormir();

  cout << " et je reve du prince charmant";
}

void Femme::faireAvec(int degre) {
  if (degre < 5) {
    cout << "Jsuis pa baite jvou di" << endl;
  } else {
    cout << "Je ne suis pas bete je vous dis" << endl;
  }
}
