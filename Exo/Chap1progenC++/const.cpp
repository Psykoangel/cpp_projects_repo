#include <iostream>

using namespace std;

int main() {
  // D�finit les constantes ; ne provoque pas de sortie
  const char BEEP = '\b';
  const int MAXINT = 2147483647;
  const int N = MAXINT / 2;
  const float KM_PER_MI = 1.60934;
  const double PI = 3.14159265358979323846;
  cout << MAXINT << ' ' << N << ' ' << KM_PER_MI << ' ' << PI << endl;
}
