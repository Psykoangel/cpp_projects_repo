/* Affiche un triangle de nombre 1         */
/*                               2 3       */
/*                               4 5 ...   */

#include <iostream.h>

using namespace std;

int main() {

  int n, i, j, k = 1;

  cout << "Entrer un nombre n superieur ou egal a 0: ";
  cin >> n;

  for (i = 0; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << " " << k;
      k = k + 1;
    }
    cout << endl;
  }
}
