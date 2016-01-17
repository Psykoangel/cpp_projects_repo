#include <iostream.h>

using namespace std;

int main() {

  int i, j, n;

  cout << "entrer une valeur: ";
  cin >> n;

  for (i = 0; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}
