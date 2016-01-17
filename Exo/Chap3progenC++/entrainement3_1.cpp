// Programme teste si un entier positif est divisible par un autre

#include <iostream>

using namespace std;

int main() {

  int n, d;

  cout << "Entrez deux nombres positifs : " << endl;
  cin >> n;
  cin >> d;

  if (n % d == 0)
    cout << n << " est divible par " << d << endl;
  else
    cout << n << " n'est pas divible par " << d << endl;

  return 0;
}
