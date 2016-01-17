// Imprime les valeurs promues de 65 d'un char en un double

#include <iostream>

using namespace std;

int main() {

  char c = 'A';
  cout << "   char c = " << c << endl;

  short k = c;
  cout << "  short k = " << k << endl;

  int m = k;
  cout << "    int m = " << m << endl;

  long n = m;
  cout << "   long n = " << n << endl;

  float x = m;
  cout << "  float x = " << x << endl;

  double y = x;
  cout << " double y = " << y << endl;

  return 0;
}
