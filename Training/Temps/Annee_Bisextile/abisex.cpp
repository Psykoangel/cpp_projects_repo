/*Application permettant de savoir si une ann�e est bisextile ou non*/

#include <iostream.h>

int main() {

  int a;

  cout << "Entrer l annee :" << endl;
  cin >> a;

  if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)) {
    cout << "L annee est bisextile" << endl;
  } else
    cout << "L annee est non bisextile" << endl;

  return 0;
}
