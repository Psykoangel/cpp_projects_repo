// Programme imprimant le minimum de deux entiers

#include <iostream>

using namespace std;

int main() {

  int a, b;

  cout << "Entrez deux nombres entiers positifs : " << endl;
  cin >> a;
  cin >> b;

  cout << (a < b ? a : b) << " est le minimum." << endl;
  // L'expression conditionnelle (a<b ? a:b) est evaluee a a si a<b et a b dans
  // un autre cas
  return 0;
}
