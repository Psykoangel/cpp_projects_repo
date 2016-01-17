// Convertit l'unite pouce en centimetre

#include <iostream>

using namespace std;

int main() {

  float pouce;
  float cm;
  float c = 2.54;

  cout << "Saissisez une longueur en pouce : " << endl;
  cin >> pouce;

  cm = pouce * c;

  cout << pouce << " pouces est egal en centimetres : " << cm << " cm." << endl;

  return 0;
}
