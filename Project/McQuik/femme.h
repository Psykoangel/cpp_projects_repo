#ifndef FEMME_HPP
#define FEMME_HPP

#include <string>

#include "perso.h"
#include "betise.hpp"

using namespace std;

class Femme : public Perso, public Betise {

public:
  Femme(string add_nom, string add_prenom);
  void dormir();
  void faireAvec(int degre);
};

#endif // FEMME_HPP
