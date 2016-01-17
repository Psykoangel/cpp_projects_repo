// Implemente la formule quadratique

#include <iostream>
#include <cmath> // Definit la fonction sqrt()

using namespace std;

int main() {

  double a, b, c;

  cout << "Entrez les coefficients d'une equation du second degre : " << endl;
  cout << "\ta : ";
  cin >> a;
  cout << "\tb : ";
  cin >> b;
  cout << "\tc : ";
  cin >> c;

  cout << "L equation est la suivante : " << a << "*x*x + " << b << "*x + " << c
       << " = 0" << endl;

  double d = b * b - 4 * a * c; // Discriminant
  double sqrtd = sqrt(d);
  double x1 = (-b + sqrtd) / (2 * a);
  double x2 = (-b - sqrtd) / (2 * a);

  cout << "Les solutions de l equation sont : " << endl;
  cout << "\tx1 = " << x1 << endl;
  cout << "\tx2 = " << x2 << endl;
  cout << "Verification : " << endl;
  cout << "\ta*x1*x1 + b*x1 + c = " << a * x1 * x1 + b * x1 + c << endl;
  cout << "\ta*x2*x2 + b*x2 + c = " << a * x2 * x2 + b * x2 + c << endl;

  return 0;
}
