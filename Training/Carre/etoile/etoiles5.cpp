#include <iostream.h>

using namespace std;

int main() {

  int m, n, i, j;

  cout << "Entrer un nombre n superieur ou egal a 0" << endl;
  cin >> n;
  cout << "Entrer un nombre m superieur ou egal a 0" << endl;
  cin >> m;

  if (n > 0 && m > 0) {
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        cout << "*";
      }

      cout << endl;
    }
  }
}
