// Programme qui permet de joueur a pierre, feuille, ciseaux

#include <iostream>

using namespace std;

enum Gagnant { JOUEUR1, JOUEUR2, MATCHNUL };

int main() {

  int choix1, choix2;

  cout << "Choisissez Pierre (0), Feuille (1), Ciseaux (2) : \n" << endl;

  cout << "Joueur #1 : ";
  cin >> choix1;
  cout << "\n";

  cout << "Joueur #2 : ";
  cin >> choix2;

  int n = (choix1 - choix2 + 3) % 3;
  Gagnant gagnant = (n == 0 ? MATCHNUL : (n == 1 ? JOUEUR1 : JOUEUR2));

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
