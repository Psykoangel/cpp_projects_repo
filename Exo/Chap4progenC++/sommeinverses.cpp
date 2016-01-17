// Programme qui calcule la somme des inverses x = 1 + 1/2 + 1/3 + .... + 1/n
// ou n represente le plus petit entier pour lequel n >= s

#include <iostream>

using namespace std;

int main() {

  int limite;

  cout << "Entrez un entier positif :" << endl;
  cin >> limite;

  double somme = 0.0;
  int i = 0;

  while (somme < limite)
    somme += 1.0 / ++i;

  cout << "La somme des " << i
       << " premiers nombres inverses est egale a : " << somme << endl;

  return EXIT_SUCCESS;
}
