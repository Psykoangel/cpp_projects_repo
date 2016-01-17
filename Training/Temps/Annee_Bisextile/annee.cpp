/* Programme pour savoir si une annee est bisextile */
/* TP de langage C                                  */

#include <iostream.h>

int main() {

  int x;

  cout << "Entrer l'annee " << endl;

  cin >> x;

  if (x % 400 == 0) {
    cout << "L'annee " << x << " est bisextile" << endl;

  } else {
    if (x % 400 == 0 && x % 100 != 0) {
      cout << "L'annee " << x << " est bisextile" << endl;

    } else {
      cout << "L'annee " << x << " n'est pas bisextile" << endl;
    }
  }

  return 0;
}
