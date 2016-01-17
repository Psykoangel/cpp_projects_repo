// Programme teste le divisibilite de deux entiers

#include <iostream>

using namespace std;

int main() {

  int n, d;

  cout << "Entrez deux nombres entiers positifs : " << endl;
  cin >> n;
  cin >> d;

  if (d != 0 && n % d == 0)
    cout << d << " divise " << n << endl;
  else
    cout << d << " ne divise pas " << n << endl;

  return 0;
}
