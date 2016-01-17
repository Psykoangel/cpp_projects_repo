#include <iostream>

using namespace std;

int main() {
  // Imprime "m = 2147348480 (compilateur GNU C) et n = 44"
  int m;      // MAUVAIS : m n'est pas initialisee
  int n = 44; // Affecte la valeur 44 a la variable n
  cout << "m = " << m << " et n = " << n << endl;
  return 0;
}
