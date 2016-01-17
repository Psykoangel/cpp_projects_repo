// Programme imprimant le minimum de trois entiers

#include <iostream>

using namespace std;

int main() {

  int a, b, c;

  cout << "Entrez trois nombres entiers positifs : " << endl;
  cin >> a >> b >> c;

  if ((a < b) && (a < c))
    cout << a << " est le minimum." << endl;

  if ((b < c) && (b < a))
    cout << b << " est le minimum.";

  if ((c < a) && (c < b))
    cout << c << " est le minimum.";

  return 0;
}
