// Affiche les differences entre m++ et ++m

#include <iostream>

using namespace std;

int main() {

  int m, n;

  m = 44;
  n = ++m; // L'operateur de pre-incrementation est applique a m
  cout << "m = " << m << " ,n = " << n << endl;

  m = 44;
  n = m++; // L'operateur de post-incrementation est applique a m
  cout << "m = " << m << " ,n = " << n << endl;

  return 0;
}
