#include <stdio.h>
#include <stdlib.h>

#include "affichage_.h"
#include "saisie.h"
#include "QuitterProg.h"

int main() {

  int choix = 0, nb = 0;

  aff_Bienvenue();

  system("PAUSE");
  system("cls");

  aff_menuPrincipal();
  choix_Menu(&choix);

  switch (choix) {
  case 1:
    NewGame();
    break;
  case 2:
    nb = continuGame();
    break;
  case 3:
    nb = Quitter();
    break;
  }

  // printf("Votre choix vaut : %d", nb);
  return EXIT_SUCCESS;
}
