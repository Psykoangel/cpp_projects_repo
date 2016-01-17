// Illustre l'erreur d'arrondi

#include <iostream>

using namespace std;

int main() {

  double x = 1000 / 3.0;
  cout << "x = " << x << endl; // x = 1000 /3

  double y = x - 333.0;
  cout << "y = " << y << endl; // y = 1 / 3

  double z = 3 * y - 1.0;
  cout << "z = " << z << endl; // z = 3 (1 / 3) - 1

  if (z == 0)
    cout << "z == 0.\n";
  else
    cout << "z n'est pas egal a 0." << endl; // z != 0

  return 0;
}
