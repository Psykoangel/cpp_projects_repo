#include <iostream.h>

using namespace std;

int main() {

  int i, j, n, k = 1;

  cout << "entrer une valeur: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << k;
      k = k + 1;
    }
    cout << endl;
  }
}
