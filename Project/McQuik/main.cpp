#include <string>
#include <iostream>
#include <time.h>

#include "perso.h"
#include "couple.h"
#include "Homme.h"
#include "femme.h"

using namespace std;

int main() {

  int choix = 0;

  // choix mc ou couple
  while (choix != 1 && choix != 2 && choix != 3) {
    cout << "1. McQuick\n" << endl;
    cout << "2. Couple\n" << endl;
    cout << "3. Carnet\n" << endl;
    cout << "Votre choix ?" << endl;
    cin >> choix;

    // si choix 1 alors couple
    if (choix == 1) {
      string nom_choisi;
      string prenom_choisi;
      string naissance_choisi;
      int poids_choisi;

      cout << "\nVotre nom?" << endl;
      cin >> nom_choisi;
      cout << "\nVotre prenom?" << endl;
      cin >> prenom_choisi;
      cout << "\nVotre date de naissance? (XX/XX/XX)" << endl;
      cin >> naissance_choisi;
      cout << "\nVotre poids?" << endl;
      cin >> poids_choisi;

      Perso Test(nom_choisi, prenom_choisi, naissance_choisi, poids_choisi);

      // on appelle les m�thodes
      Test.afficher_recap();
      Test.aller_au_McQuick();
    }

    if (choix == 2) {
      Homme membre1("X", "X");
      Homme membre2("Y", "Y");

      Couple couple_test("19/05/91", membre1, membre2);
      // int poids_total = couple_test.poids_du_couple();

      cout << "\n** Test fonction poids_du_couple **";
      // cout << "\nPoids total du couple: " << poids_total << "kg ! \n" <<
      // endl;

      cout << "** Test fonction faire_un_enfant **" << endl;
      // couple_test.faire_un_enfant();
    }

    if (choix == 3) {

      string nom_choisi = "titi";
      string prenom_choisi = "jeanne";
      Perso nobody("inconnu", "inconnu");
      Femme jeanne(nom_choisi, prenom_choisi);
      Homme jean("jean", "jeannot");

      // nobody.dormir();
      jeanne.faireAvec(4);
      // jean.dormir();
      Perso *Carnet[5];

      Carnet[1] = new Perso("titi", "jean");
      Carnet[2] = new Homme("toto", "marcel");
      Carnet[3] = new Femme("tata", "huguette");
      Carnet[4] = new Perso("tutu", "leon");

      for (unsigned int i = 1; i <= 4; ++i) {
        Carnet[i]->dormir();
      }
    }
  }

  string pause;
  std::cin >> pause;

  return 0;
}
