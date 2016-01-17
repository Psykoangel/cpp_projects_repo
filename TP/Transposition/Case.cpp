#include <iostream>
#include "Case.h"

using namespace std;

Case::Case() {}

/**Constructeur
 *@param x le numéro de ligne commençant par 0
 *@param y le numéro de colonne commençant par 0
 *@param n le nombre de mine voisine
 *@param m initialisation de l'attribut mime
 */
Case::Case(int x, int y, int n, bool m) {
  this->x = x;
  this->y = y;
  nbMineVoisine = n;
  mine = m;
  masquee = true; // en début de partie la case est masquée
}

void Case::affiche() {
  if (!masquee) { // si la case n'est pas masquée on affiche
    if (mine) {
      cout << " * "; //* pour une mine
    } else {
      cout << " . "; //. pour une case non minée
    }
  } else
    cout << " M "; // M comme Masquée
}

void Case::caseMine(bool b) { mine = b; }

bool Case::decouvrir() {
  masquee = false;
  return mine;
}
