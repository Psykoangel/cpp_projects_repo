#include <iostream.h>

using namespace std;

int main() {

  float x = 3, y;

  y = (int)x / 4;
  cout << y << endl;

  y = (int)x / (float)4;
  cout << y << endl;

  y = (int)x / 4.0;
  cout << y << endl;

  y = x / 4;
  cout << y << endl;
}
