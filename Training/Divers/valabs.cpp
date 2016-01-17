/*Programme calculant la valeur absolue d'un nombre*/

#include <iostream.h>

using namespace std;

int main() {

  float i;
  cout << "Entrer le nombre : ";
  cin >> i;

  if (i < 0) {
    i = -i;
  }

  cout << "La valeur absolue du nombre est de: " << i << endl;
}
