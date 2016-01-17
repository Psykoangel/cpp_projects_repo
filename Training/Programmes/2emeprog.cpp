#include <iostream.h>
#include <math.h>

using namespace std;

int main() {

  int n, x;

  cout << "entre un nombre: ";
  cin >> n;

  if (n >= 0) {
    while (n >= 1) {
      cout << "*";
      n = n - 1;
    }
    cout << endl;
  } else {
    cout << "mettre un nombre superieur a 0" << endl;
  }
}
