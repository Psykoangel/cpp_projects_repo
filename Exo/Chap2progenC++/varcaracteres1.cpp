// Imprime le caractere et sa valeur entiere stockee en interne

#include <iostream>

using namespace std;

int main() {

  char c = 'A';
  cout << "c = " << c << ", int(c) = " << int(c) << endl;

  c = 't';
  cout << "c = " << c << ", int(c) = " << int(c) << endl;

  c = '\t'; // Caractere de tabulation
  cout << "c = " << c << ", int(c) = " << int(c) << endl;

  c = '!';
  cout << "c = " << c << ", int(c) = " << int(c) << endl;

  return 0;
}
