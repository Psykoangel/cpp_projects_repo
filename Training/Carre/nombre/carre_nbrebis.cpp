#include <iostream.h>

using namespace std;

int main() {

  int i, j, n, p, x, y;

  cout << "entrer une valeur: ";
  cin >> n;

  p = n;
  x = 1;
  y = 1;

  for (i = 1; i <= n; i++) {
    for (j = x; j <= p; j++) {
      cout << " " << j;
    }
    cout << endl;
    x = p + 1;
    p = n * (i + 1);
  }
}
