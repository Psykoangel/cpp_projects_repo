// Programme imprimant le minimum de trois entiers

#include <iostream>

using namespace std;

int main() {

  int n1, n2, n3;

  cout << "Entrez trois nombres entiers positifs : " << endl;
  cin >> n1 >> n2 >> n3;

  int min = n1; // Desormais min <= n1

  if (n2 < min)
    min = n2; // Desormais min <= n1 et min <= n2

  if (n3 < min)
    min = n3; // Desormais min <= n1, min <= n2 et min <= n3

  cout << min << " est le minimum." << endl;

  return 0;
}
