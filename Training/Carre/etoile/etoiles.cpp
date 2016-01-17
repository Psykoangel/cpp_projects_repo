#include <iostream.h>

using namespace std;

int main() {

  int n, i;

  cout << "Entrer un nombre n superieur ou egal a 0" << endl;
  cin >> n;

  if (n >= 0) {
    for (i = 0; i < n; i = i + 1) {
      cout << "*" << endl;
      endl;
    }
  }
}
