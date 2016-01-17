/*Application permettant l affichage des mois par un nombre entre 1 et 12.*/

#include <iostream.h>

int main() {

  int x;

  cout << "Entrer un nombre entre 1 et 12 pour chaque mois de l annee" << endl;
  cin >> x;

  switch (x) {
  case 1:
    cout << "Le mois est janvier";
    break;
  case 2:
    cout << "Le mois est fevrier";
    break;
  case 3:
    cout << "Le mois est mars";
    break;
  case 4:
    cout << "Le mois est avril";
    break;
  case 5:
    cout << "Le mois est mai";
    break;
  case 6:
    cout << "Le mois est juin";
    break;
  case 7:
    cout << "Le mois est juillet";
    break;
  case 8:
    cout << "Le mois est aout";
    break;
  case 9:
    cout << "Le mois est septembre";
    break;
  case 10:
    cout << "Le mois est octobre";
    break;
  case 11:
    cout << "Le mois est novembre";
    break;
  case 12:
    cout << "Le mois est decembre";
    break;
  default:
    cout << "Entrer un nombre entre 1 et 12" << endl;
  }

  return 0;
}
