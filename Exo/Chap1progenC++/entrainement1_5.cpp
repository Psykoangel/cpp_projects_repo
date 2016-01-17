#include <iostream>

using namespace std;

int main() {
  int n;
  int total;
  cout << "Entrez une valeur entiere pour n :" << endl;
  cin >> n;
  cout << "Entrez une valeur entiere pour total :" << endl;
  cin >> total;
  cout << "Le programme decremente la variable n et l ajoute ensuite a total"
       << endl;
  total += --n;
  // Code en une seule instruction C++ qui decremente la variable n et l'ajoute
  // ensuite a la variable total
  cout << total << endl;
  cout << n << endl;

  return 0;
}
