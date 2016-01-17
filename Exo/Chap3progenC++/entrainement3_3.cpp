// Programme imprimant la moyenne de trois entiers

#include <iostream>

using namespace std;

int main() {

  int n1, n2, n3;
  float moy;

  cout << "Entrez trois nombres entiers positifs : " << endl;
  cin >> n1;
  cin >> n2;
  cin >> n3;

  moy = ((n1 + n2 + n3) / 3);

  cout << "La moyenne des trois entiers est : " << moy << "." << endl;

  return 0;
}
