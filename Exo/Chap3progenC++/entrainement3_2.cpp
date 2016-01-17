// Programme imprimant le minimum de quatres entiers

#include <iostream>

using namespace std;

int main() {

  int n1, n2, n3, n4;

  cout << "Entrez quatres nombres entiers positifs : " << endl;
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cin >> n4;

  int min = n1; // Desormais min <= n1

  if (n2 < min)
    min = n2; // Desormais min <= n1 et min <= n2

  if (n3 < min)
    min = n3; // Desormais min <= n1, min <= n2 et min <= n3

  if (n4 < min)
    min = n4; // Desormais min <= n1, min <= n2, min <= n3 et min <= n4

  cout << min << " est le minimum." << endl;

  return 0;
}
