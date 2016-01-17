/*Application permettant d afficher des etoiles d apres le nombre entre et saut
 * a la ligne.*/

#include <iostream.h>

using namespace std;

int main() {

  int n, m, i, j;
  cout << "Entrer le chiffre n" << endl;
  cin >> n;
  cout << "Entrer le chiffre m" << endl;
  cin >> m;

  if ((n >= 0) && (m >= 0)) {
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= m; j++) {
        cout << "*";
      }
      cout << endl;
    }
  }
}
