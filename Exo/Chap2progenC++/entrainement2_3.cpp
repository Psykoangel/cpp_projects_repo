// Modifie la valeur de x une fois qu'elle est passee a inf

#include <iostream>

using namespace std;

int main() {

  float x = 1e30;
  cout << "x = " << x << endl;

  x *= x; // Multiplie x par lui-meme, c'est-a-dire x au carre
  cout << "x = " << x << endl;

  x *= -1.0; // Multiplie par -1.0 pour qu'inf devienne -inf et inversement
  cout << "x = " << x << endl;

  x *= -1.0; // Multiplie par -1.0 pour qu'inf devienne -inf et inversement
  cout << "x = " << x << endl;

  return 0;
}
