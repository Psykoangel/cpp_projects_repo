// Imprime depassement si variable count depasse 100

#include <iostream>

using namespace std;

int main() {

  int count = 1;

  for (count = 1; count < 150; count++) {
    cout << "count = " << count << endl;
    if (count > 100)
      cout << "Depassement" << endl;
  }

  return 0;
}
