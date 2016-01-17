/* Affiche des nombres tel que 1     */
/*                             1 2   */
/*                             1 2 3 */

#include <iostream.h>

using namespace std;

int main() {

  int n, i, j, k;

  cout << "Entrer un nombre n superieur ou egal a 0: ";
  cin >> n;

  for (i = 0; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << " " << j;
    }
    cout << endl;
  }
}
