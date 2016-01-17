/* Affiche des nombres tel que   1 2 3 4 */
/*                               5 6 7 8 */
/*                               9 10 .. */

#include <iostream.h>

using namespace std;

int main() {

  int n, i, j, k = 1;

  cout << "Entrer un nombre n superieur ou egal a 0: ";
  cin >> n;

  for (i = 0; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      cout << " " << k;
      k = k + 1;
    }
    cout << endl;
  }
}
