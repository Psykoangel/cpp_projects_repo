// Programme qui permet de joueur a pierre, feuille, puit, ciseaux

#include <iostream>

using namespace std;

enum Gagnant { JOUEUR1, JOUEUR2, MATCHNUL };

int main() {
  int choix1, choix2;
  Gagnant gagnant;

  cout << "Choisissez Pierre (1), Feuille (3), Puit (6), Ciseaux (9) : \n"
       << endl;

  cout << "Joueur #1 : ";
  cin >> choix1;
  cout << "\n";

  cout << "Joueur #2 : ";
  cin >> choix2;

  switch (choix2 - choix1) {
  case -8:
    gagnant = JOUEUR2;
    break;
  case -6:
    gagnant = JOUEUR1;
    break;
  case -5:
    gagnant = JOUEUR1;
    break;
  case -3:
    gagnant = JOUEUR2;
    break;
  case -2:
    gagnant = JOUEUR1;
    break;
  case 0:
    gagnant = MATCHNUL;
    break;
  case 2:
    gagnant = JOUEUR2;
    break;
  case 3:
    gagnant = JOUEUR1;
    break;
  case 5:
    gagnant = JOUEUR2;
    break;
  case 6:
    gagnant = JOUEUR2;
    break;
  case 8:
    gagnant = JOUEUR1;
    break;
  }

  if (gagnant == MATCHNUL) {
    cout << "\n \n \t *************************" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *      MATCH NUL !      *" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *************************\n \n" << endl;

  } else if (gagnant == JOUEUR1) {
    cout << "\n \n \t *************************" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *   JOUEUR 1 GAGNE !    *" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *************************\n \n" << endl;

  } else if (gagnant == JOUEUR2) {
    cout << "\n \n \t *************************" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *   JOUEUR 2 GAGNE !    *" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *************************\n \n" << endl;
  }

  return 0;
}
