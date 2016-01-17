// Programme qui affiche la racine carre de chaque nombre que l'utilisateur
// saisi
// Il utilise la boucle while afin d'effectuer n calculs en une seule execution
// du programme

#include <iostream>
#include <cmath> // permet d'utiliser la fonction sqrt ()

using namespace std;

int main() {

  double x;

  cout << "Entrez un entier positif :" << endl;
  cin >> x;

  while (x > 0) {
    cout << "sqrt (" << x << " ) = " << sqrt(x) << endl;
    cout << "Entrer un autre nombre positif (ou 0 pour quitter) : ";
    cin >> x;
  }

  return EXIT_SUCCESS;
}
