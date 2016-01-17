#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Entrez une valeur entiere pour n = " << endl;
  cin >> n;
  cout << " La valeur de n est de " << n << endl;
  cout << " Premiere instruction de n - 1 : ";
  n = n - 1;
  cout << n << endl;
  n = n + 1;
  cout << " Deuxieme instruction de n - 1 : ";
  n -= 1;
  cout << n << endl;
  n = n + 1;
  cout << " Troisieme instruction de n - 1 : ";
  --n;
  cout << n << endl;
  n = n + 1;
  cout << " Quatrieme instruction de n - 1 : ";
  n--;
  cout << n << endl;

  return 0;
}
