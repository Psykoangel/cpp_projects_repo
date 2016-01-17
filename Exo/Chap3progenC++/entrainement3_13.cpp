// Programme qui imprime la somme des chiffres d'un entier donne

#include <iostream>

using namespace std;

int main() {

  int n, somme;

  cout << "Entrez un entier a six chiffres :" << endl;
  cin >> n;
  cout << "\n";

  somme = n % 10 + n / 10 % 10 + n / 100 % 10 + n / 1000 % 10 + n / 10000 % 10 +
          n / 100000;

  cout << "La somme des chiffres de : " << n << " est egale a : " << somme
       << endl;
}
