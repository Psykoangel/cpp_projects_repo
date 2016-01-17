#include <iostream>
#include <string>

#include "perso.h"

using namespace std;

Perso::Perso() {}

Perso::~Perso() {}

Perso::Perso(std::string add_nom, std::string add_prenom) {
  nom = add_nom;
  prenom = add_prenom;
}

Perso::Perso(std::string add_nom, std::string add_prenom,
             std::string add_naissance, int add_poids) {
  nom = add_nom;
  prenom = add_prenom;
  naissance = add_naissance;
  poids = add_poids;
}

void Perso::aller_au_McQuick() {
  int poids_sup;
  cout << "Bienvenue au McQuick !" << endl;
  cout << "De combien de kilos voulez-vous grossir ?" << endl;
  cin >> poids_sup;

  poids += poids_sup;

  cout << "\nVous pesez desormais " << poids << " kilos! \n" << endl;
}

void Perso::afficher_recap() {
  cout << "\n** Recap' **" << endl;
  cout << "Nom: " << nom << endl;
  cout << "Prenom: " << prenom << "." << endl;
  cout << "Naissance: " << naissance << endl;
  cout << "Le poids de M." << nom << " est " << poids << "kg !\n" << endl;
}

void Perso::dormir() { std::cout << "\nJe dors"; }

int Perso::get_poids() { return this->poids; }

string Perso::recup_nom() { return this->nom; }
