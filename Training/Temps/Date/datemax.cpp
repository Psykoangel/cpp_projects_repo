#include <iostream>
#include <stdlib.h>

using namespace std;

void ImprimerDate(int mois, int jour, int annee);

int main() {

  int mois, jour, annee;

  do {
    cout << "Mois ?" << endl;
    cin >> mois;
    cout << "Jour ?" << endl;
    cin >> jour;
    cout << "Annee ?" << endl;
    cin >> annee;

    ImprimerDate(mois, jour, annee);
  } while (mois > 0);

  return 0;
}

void ImprimerDate(int mois, int jour, int annee) {

  if (mois < 1 || mois > 12 || jour < 1 || jour > 31 || annee < 0) {
    cout << "Erreur : veuillez resaisir une autre date" << endl;
    return;
  }

  switch (mois) {
  case 1:
    cout << "Janvier";
    break;
  case 2:
    cout << "Fevrier";
    break;
  case 3:
    cout << "Mars";
    break;
  case 4:
    cout << "Avril";
    break;
  case 5:
    cout << "Mai";
    break;
  case 6:
    cout << "Juin";
    break;
  case 7:
    cout << "Juillet";
    break;
  case 8:
    cout << "Aout";
    break;
  case 9:
    cout << "Septembre";
    break;
  case 10:
    cout << "Octobre";
    break;
  case 11:
    cout << "Novembre";
    break;
  case 12:
    cout << "Decembre";
    break;
  }

  cout << " " << jour << " , " << annee << endl;
}
