#include <iostream.h>

using namespace std;

int main() {

  int x, i;

  cout << "Entrer un nombre x superieur ou egal a 0" << endl;
  cin >> x;

  if (x >= 0) {
    i = 1;
    while (i <= x) {
      cout << "*" << endl;
      i = i + 1;
    }
  }
}
