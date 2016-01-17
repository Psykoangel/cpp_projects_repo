#include <iostream.h>

using namespace std;

int main() {

  int n, m, i, j;

  cout << "entrer la valeur de n: ";
  cin >> n;
  cout << "entrer la valeur de m: ";
  cin >> m;

  if (n > 0 && m > 0) {
    for (i = 1; i <= m; i++) {
      for (j = 1; j <= n; j++) {
        cout << "*";
      }
      cout << endl;
    }
  } else {
    cout << "entrer une valeur positive pour n et m !" << endl;
  }
}
