// Programme teste si un entier positif est ou n'est pas divisible par un autre

#include <iostream>

using namespace std;

int main() {

  int n, d;

  cout << "Entrez deux nombres positifs : " << endl;
  cin >> n >> d;

  if (n % d)
    cout << n << " n'est pas divible par " << d << endl;
  else
    cout << n << " est divisible par " << d << endl;

  return 0;
}
