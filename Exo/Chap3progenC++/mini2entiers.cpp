// Programme imprimant le minimum de deux entiers

#include <iostream>

using namespace std;

int main() {

  int a, b;
  cout << "Entrez deux nombres entiers positifs : " << endl;
  cin >> a >> b;

  if (a < b)
    cout << a << " est le minimum." << endl;
  else
    cout << b << " est le minimum." << endl;

  return 0;
}
