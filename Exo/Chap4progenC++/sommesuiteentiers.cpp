// Programme qui calcule la somme 1+2+3+....+n, suite a la saisie d'un entier n
#include <iostream>

using namespace std;

int main() {

  int n, i = 1;

  cout << "Entrez un entier positif :" << endl;
  cin >> n;

  long somme = 0;

  while (i <= n)
    somme += i++;

  cout << "La somme des " << n << " premiers entiers est egale a : " << somme;

  return EXIT_SUCCESS;
}
