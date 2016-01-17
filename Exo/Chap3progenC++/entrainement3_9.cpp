// Programme qui permet de joueur a pierre, feuille, puit, ciseaux

#include <iostream>

using namespace std;

enum Choix { PIERRE, FEUILLE, PUIT, CISEAUX };
enum Gagnant { JOUEUR1, JOUEUR2, MATCHNUL };

int main() {

  int n;
  Choix choix1, choix2;
  Gagnant gagnant;

  cout << "Choisissez Pierre (0), Feuille (1), Puit (2), Ciseaux (3) : \n"
       << endl;

  cout << "Joueur #1 : ";
  cin >> n;
  cout << "\n";
  choix1 = Choix(n);

  cout << "Joueur #2 : ";
  cin >> n;
  choix2 = Choix(n);

  if (choix1 == choix2) {
    gagnant = MATCHNUL;

    cout << "\n \n \t *************************" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *      MATCH NUL !      *" << endl;
    cout << "\t *                       *" << endl;
    cout << "\t *************************\n \n" << endl;

  } else if (choix1 == PIERRE)
    if (choix2 == PUIT)
      gagnant = JOUEUR2;
    else if (choix2 == CISEAUX)
      gagnant = JOUEUR1;
    else
      gagnant = JOUEUR2;

  else if (choix1 == FEUILLE)
    if (choix2 == PIERRE)
      gagnant = JOUEUR1;
    else if (choix2 == PUIT)
      gagnant = JOUEUR1;
    else
      gagnant = JOUEUR2;

  else if (choix1 == PUIT)
    if (choix2 == CISEAUX)
      gagnant = JOUEUR1;
    else if (choix2 == PIERRE)
      gagnant = JOUEUR1;
    else
      gagnant = JOUEUR2;

  else if (choix1 == CISEAUX)
    if (choix2 == PIERRE)
      gagnant = JOUEUR2;
    else if (choix2 == PUIT)
      gagnant = JOUEUR2;
    else
      gagnant = JOUEUR1;

  if (gagnant == JOUEUR1) {
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
