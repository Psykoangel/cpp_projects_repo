#include <iostream>

using namespace std;

int main() {
  // Programme demontrant ue erreur d'arrondi en executant les etapes suivantes
  // :
  float a = 666666;    // = a = 666666
  float b = 1 - 1 / a; // = (a-1)/a = 666665/666666
  float c = 1 / b - 1; // = 1/(a-1) = 1/666665
  float d = 1 / c + 1; // = a = 666666 != 671089
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  return 0;
}
