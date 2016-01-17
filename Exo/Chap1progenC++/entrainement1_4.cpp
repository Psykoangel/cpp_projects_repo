#include <iostream>

using namespace std;

int main() {
  int x;
  int y;
  int z;

  cout << "Entrez une valeur entiere pour x :" << endl;
  cin >> x;
  cout << "Entrez une valeur entiere pour y :" << endl;
  cin >> y;
  cout << "Entrez une valeur entiere pour z :" << endl;
  cin >> z;
  cout << "Le programme soustrait la somme de x et y de z et qui incremente "
          "ensuite y."
       << endl;
  z -= (x + y++);
  // Code en une seule instruction C++ qui soustrait la somme de x et y de z,
  // puis qui incremente y
  cout << z << endl;
  cout << y << endl;

  return 0;
}
