#include <iostream.h>

using namespace std;

int main() {

  float celsius;
  float fahren;

  cout << "Entrer la valeur en degre celsius :" << endl;
  cin >> celsius;

  fahren = (9.0 / 5) * celsius + 32;

  cout << "La temperature en fahrenheit est de :" << fahren << " fahrenheit"
       << endl;
}
