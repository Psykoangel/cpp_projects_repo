#include <iostream.h>

int main() {

  int ttotal, h, m, s;

  cout << "Entrer le temps total en secondes" << endl;
  cin >> ttotal;

  h = ttotal / 3600;
  ttotal = ttotal - h * 3600;
  m = ttotal / 60;
  s = ttotal - m * 60;

  cout << "Le Temps en h,m,s est: " << h << "heures " << m << "minutes "
       << "et" << s << "secondes " << endl;

  return 0;
}
