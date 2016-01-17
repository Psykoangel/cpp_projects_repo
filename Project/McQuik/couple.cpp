#include <string>
#include <iostream>
#include <time.h>

#include "couple.h"

using namespace std;

Couple::Couple(std::string date_choisie, Perso membre1_choisi,
               Perso membre2_choisi) {
  this->date_mariage = date_choisie;
  this->membre1 = membre1_choisi;
  this->membre2 = membre2_choisi;
}

int Couple::poids_du_couple() {

  int poids1 = this->membre1.get_poids();
  int poids2 = this->membre2.get_poids();
  int poids_total = poids1 + poids2;

  return poids_total;
}

void Couple::faire_un_enfant() {

  // On calcule le poids de l'enfant
  int poids_total = this->poids_du_couple();
  int poids_enfant = poids_total / 50;

  // On r�cup�re la date et l'heure de naissance
  time_t date_naissance;
  time(&date_naissance);

  // On chosit le nom de l'enfant
  int choix = 0;

  while (choix != 1 && choix != 2) {
    cout << "\nQuel nom ?\n" << endl;

    // on r�cup�re les noms via la m�thode recup_nom
    string nom1 = this->membre1.recup_nom();
    string nom2 = this->membre2.recup_nom();

    cout << "1. " << nom1 << endl;
    cout << "2. " << nom2 << endl;

    cin >> choix;

    if (choix == 1) {
      Perso enfant(nom1, nom1, ctime(&date_naissance), poids_enfant);

      cout << "\n Nom: " << nom1 << endl;
      cout << "\n Naissance: " << ctime(&date_naissance);
      cout << "\n Poids: " << poids_enfant << "kg ! " << endl;
    }

    if (choix == 2) {

      Perso enfant(nom2, nom2, ctime(&date_naissance), poids_enfant);

      cout << "\n Nom: " << nom2 << endl;
      cout << "\n Naissance: " << ctime(&date_naissance);
      cout << "\n Poids " << poids_enfant << "kg ! " << endl;
    }
  }
}
