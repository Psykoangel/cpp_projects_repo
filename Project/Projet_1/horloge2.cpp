#include <iostream>
#include <stdlib.h>

using namespace std;

bool EstAnneeBissextile(int annee) {
  return annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0;
}
bool EstAnneBissextile(int);
void ImprimerDate(int annee, int jour, int mois);

int main() {

  int mois, nombre_jour_mois, jour, annee;

  do {
    cout << "Entrer l annee" << endl;
    cin >> annee;
    cout << "Entrer le jour." << endl;
    cin >> jour;
    cout << "Entrer le mois." << endl;
    cin >> mois;
  } while (mois < 0 && annee < 1);

  if (EstAnneeBissextile(annee)) {
    ImprimerDate(annee, jour, mois);

    switch (annee, jour, mois) {
    case 1:
      nombre_jour_mois = 31;
      break;
    case 2:
      nombre_jour_mois = 29;
      break;
    case 3:
      nombre_jour_mois = 31;
      break;
    case 4:
      nombre_jour_mois = 30;
      break;
    case 5:
      nombre_jour_mois = 31;
      break;
    case 6:
      nombre_jour_mois = 30;
      break;
    case 7:
      nombre_jour_mois = 31;
      break;
    case 8:
      nombre_jour_mois = 31;
      break;
    case 9:
      nombre_jour_mois = 30;
      break;
    case 10:
      nombre_jour_mois = 31;
      break;
    case 11:
      nombre_jour_mois = 30;
      break;
    case 12:
      nombre_jour_mois = 31;
      break;
    }

  } else {
    switch (annee, jour, mois) {
    case 1:
      nombre_jour_mois = 31;
      break;
    case 2:
      nombre_jour_mois = 28;
      break;
    case 3:
      nombre_jour_mois = 31;
      break;
    case 4:
      nombre_jour_mois = 30;
      break;
    case 5:
      nombre_jour_mois = 31;
      break;
    case 6:
      nombre_jour_mois = 30;
      break;
    case 7:
      nombre_jour_mois = 31;
      break;
    case 8:
      nombre_jour_mois = 31;
      break;
    case 9:
      nombre_jour_mois = 30;
      break;
    case 10:
      nombre_jour_mois = 31;
      break;
    case 11:
      nombre_jour_mois = 30;
      break;
    case 12:
      nombre_jour_mois = 31;
      break;
    }
  }

  return 0;
}

void ImprimerDate(int annee, int jour, int mois) {

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
}
