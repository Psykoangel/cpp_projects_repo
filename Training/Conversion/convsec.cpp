#include <iostream.h>

using namespace std;

int main() {

  int ttotal;
  int nb_seconde;
  int nb_minute;
  int nb_heure;

  cout << "Entrer le nombre de secondes :" << endl;
  cin >> ttotal;

  nb_heure = ttotal / 3600;
  ttotal = ttotal % 3600;
  nb_minute = ttotal / 60;
  nb_seconde = ttotal % 60;

  cout << "Le nombre d'heures est de :" << nb_heure << " heures" << endl;
  cout << "Le nombre de minutes est de :" << nb_minute << " minutes" << endl;
  cout << "Le nombre de secondes est de :" << nb_seconde << " secondes" << endl;
}
