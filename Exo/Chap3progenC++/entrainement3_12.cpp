// Programme qui permet de calculer une equation du second degre a*x*x+b*x+c = 0

#include <iostream>
#include <cmath> // Permet d'utiliser la fonction sqrt()

using namespace std;

int main() {

  float a, b, c;
  double d, x1, x2;

  cout << "Entrez les coefficients de l equation du second degre a, b et c :"
       << endl;
  cin >> a;
  cout << "\n";
  cin >> b;
  cout << "\n";
  cin >> c;
  cout << "\n";

  if (a == 0) {
    cout << "Il ne s agit pas d une equation du second degre car a = 0."
         << endl;
    return 0;
  }

  cout << "L equation est la suivante : " << a << " x^2 + " << b << "x + " << c
       << "= 0." << endl;

  d = (b * b + 4 * a * c); // Calcul du discriminant

  if (d < 0) {
    cout << "Cette equation n a pas de solutions car d < 0." << endl;
    return 0;
  }

  x1 = (-b + sqrt(d)) / (2 * a);
  x2 = (-b - sqrt(d)) / (2 * a);

  cout << "Les solutions de l equation sont : " << x1 << " et " << x2 << endl;

  return 0;
}
