#include <string>

#include "perso.h"

class Couple {

public:
  Couple(std::string, Perso, Perso);
  void faire_un_enfant();
  int poids_du_couple();

private:
  std::string date_mariage;
  Perso membre1;
  Perso membre2;
};
