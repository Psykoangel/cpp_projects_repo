// Teste les operateurs arithmetiques d'affectation

#include <iostream>

using namespace std;

int main() {

  int n = 22;
  cout << "n = " << n << endl;

  n += 9; // Ajoute 9 a n
  cout << "Apres n += 9, n = " << n << endl;

  n -= 5; // Soustrait 5 de n
  cout << "Apres n -= 5, n = " << n << endl;

  n *= 2; // Multiplie n par 2
  cout << "Apres n *= 2, n = " << n << endl;

  n /= 3; // Divise n par 3
  cout << "Apres n /= 3, n = " << n << endl;

  n %= 7; // Reduit n au reste de la division par 3
  cout << "Apres n %= 7, n = " << n << endl;

  return 0;
}
