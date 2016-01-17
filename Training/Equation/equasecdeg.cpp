/*Algorithme vus en TD de C*/

#include <math.h>
#include <iostream.h>

using namespace std;

int main() {

  float a, b, c, delta, x1, x2;

  cout << "Entrer la valeur de a :" << endl;
  cin >> a;
  cout << "Entrer la valeur de b :" << endl;
  cin >> b;
  cout << "Entrer la valeur de c :" << endl;
  cin >> c;
  delta = b * b - (4 * a * c);

  if (delta > 0) {

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "Les deux racines reels sont :" << x1 << x2 << endl;

  } else if (delta == 0) {

    x1 = -b / (2 * a);
    x2 = -b / (2 * a);

    cout << "Comme c est une racine double, on obtient :" << x1 << x2 << endl;

  } else if (delta < 0) {

    cout << "Comme delta est inferieur a 0, il n y a pas de racines reelles "
            "mais complexes."
         << endl;

    x1 = -b / (2 * a);
    x2 = (sqrt(-delta)) / (2 * a);

    cout << "Le resultat est :" << x1 << "+i" << x2 << endl;
    cout << "Le resultat est :" << x1 << "-i" << x2 << endl;
  }
}
