// Programme imprimant le minimum de trois entiers

#include <iostream>

using namespace std;

int main() {

  int n1, n2, n3;

  cout << "Entrez trois nombres entiers positifs : " << endl;
  cin >> n1;
  cin >> n2;
  cin >> n3;

  if (n1 < n2)
    if (n1 < n3)
      cout << "Leur minimum est : " << n1 << endl;
    else
      cout << "Leur minimum est : " << n3 << endl;

  else // voir si n1 >= n2
      if (n2 < n3)
    cout << "Leur minimum est : " << n2 << endl;

  else
    cout << "Leur minimum est : " << n3 << endl;

  return 0;
}
