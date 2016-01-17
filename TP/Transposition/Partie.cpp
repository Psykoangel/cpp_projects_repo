#include <iostream>
#include "Partie.h"

using namespace std;

Partie::Partie() {
  nbMineInitiale = 10;
  nbMineRestante = 10;
  joueur = "";
  niveau = "Débutant";
  p = Plateau();
  p.init(nbMineInitiale);
}

Partie::Partie(int nb, string n, string j) {
  nbMineInitiale = nb;
  nbMineRestante = nb;
  joueur = j;
  niveau = n;
}

void Partie::affiche() { p.affiche(); }

bool Partie::jouer(int choix) {
  if (choix == 1) {
  } else if (choix == 2) {
    int i, j;
    cout << "Quelle case voulez-vous découvrir ?" << endl;
    cin >> i;
    cin >> j;
    return p.decouvrir(i, j);
  }
}

int Partie::choixJoueur() {
  cout << "1. Marquee" << endl;
  cout << "2. découvrir" << endl;
  int choix;
  cout << "???????" << endl;
  cin >> choix;
  return choix;
}

bool Partie::jouer() {
  bool perdu = false;
  while (!perdu) {

    p.affiche();

    int choix = choixJoueur();
    perdu = jouer(choix);
    p.affiche();
  }
  cout << "!!!!!!!!!!!!!!!BOUM!!!!!!!!!!!!!!!" << endl;
  cout << endl;
  return true;
}
