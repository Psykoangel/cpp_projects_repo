#include <iostream.h>
#include <math.h>

using namespace std;

int main() {

  int n, x;

  cout << "entre un nombre: ";
  cin >> n;

  if (n >= 0) {
    for (x = 0; x < n; x++) {
      cout << "*";
    }
    cout << endl;
  } else {
    cout << "mettre un nombre superieur a 0" << endl;
  }
}
