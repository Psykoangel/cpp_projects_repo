// Programme qui lit deux entiers puis utilise l'operateur d'expression
// conditionnelle

#include <iostream>

using namespace std;

int main() {

  int n1, n2;

  cout << "Entrez deux entiers positifs : " << endl;
  cin >> n1;
  cin >> n2;

  if (n1 % n2 == 0 || n2 % n1 == 0)
    cout << n1 << " multiple de " << n2 << endl;
  else
    cout << n1 << " n'est multiple de " << n2 << endl;

  return 0;
}
