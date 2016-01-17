// Programme acceptant deux entiers qu'il affiche ensuite dans l'ordre croissant

#include <iostream>

using namespace std;

int main() {

  int n1, n2;

  cout << "Entrez deux nombres entiers positifs : " << endl;
  cin >> n1;
  cin >> n2;

  if (n1 > n2)
    cout << n2 << " <= " << n1 << endl;
  else
    cout << n1 << " <= " << n2 << endl;

  return 0;
}
