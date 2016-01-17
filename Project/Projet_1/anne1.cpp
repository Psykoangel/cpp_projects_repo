#include <iostream.h>

bool EstAnneBissextile(int);

int main() {

  int annee;

  do {
    cout << "Entrer l annee" << endl;
    cin >> annee;

    if (EstAnneeBissextile(annee))
      cout << annee << " est une annee bissextile" << endl;
    else
      cout << annee << " n'est pas une anne bissextile" << endl;

  } while (annee > 1);

  return 0;
}

bool EstAnneeBissextile(int annee) {
  return annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0;
}
