#include <iostream.h>

using namespace std;

#define PI 3.14

int main() {

  float r, p;

  cout << "entrer le rayon" << endl;
  cin >> r;

  p = 2 * PI * r;

  cout << "le perimetre est de :" << p << " metre" << endl;
}
