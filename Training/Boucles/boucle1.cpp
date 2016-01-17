/*Application permettant l execution de boucle for. Exercice vus en TD.*/

#include <iostream.h>

using namespace std;

int main() {

  int n, i;
  cout << "Entrer la valeur de n" << endl;
  cin >> n;

  if (n >= 0) {
    for (i = 1; i <= n; i++) {
      cout << "*";
    }
  }
}
