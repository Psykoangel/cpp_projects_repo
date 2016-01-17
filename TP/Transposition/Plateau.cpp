#include <iostream>
#include "Plateau.h"
#include "Case.h"

using namespace std;

Plateau::Plateau() {
  longueur = 10;
  largeur = 10;
  plateau = new Case *[10];
  for (int i = 0; i < 10; i++)
    plateau[i] = new Case[10];
}

Plateau::Plateau(int x, int y) {
  longueur = y;
  largeur = x;
  plateau = new Case *[y];
  for (int i = 0; i < x; i++)
    plateau[i] = new Case[x];
}

void Plateau::affiche() {
  for (int i = 0; i < longueur; i++) {
    for (int j = 0; j < largeur; j++) {
      plateau[i][j].affiche();
    }
    cout << endl;
  }
  cout << endl;
}

void Plateau::init(int n) {
  for (int i = 0; i < longueur; i++)
    for (int j = 0; j < largeur; j++)
      plateau[i][j] = Case(i, j, 0, false);

  int nb = 0;

  for (int i = 0; i < longueur; i++)
    for (int j = 0; j < largeur; j++) {
      if (nb < n) {
        plateau[i][j] = Case(i, j, 0, true);
        nb++;
      }
    }
}

bool Plateau::decouvrir(int i, int j) { return plateau[i][j].decouvrir(); }
