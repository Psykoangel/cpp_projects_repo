// Programme qui permet a l'utilisateur de choisir sa langue d'origine et
// affiche un message d'accueil dans sa langue

#include <iostream>

using namespace std;

int main() {

  char langage;

  cout << "Quelle est votre langue naturelle : a : anglais, f : francais, \ng "
          ": allemeand, i : italien et r : russe."
       << endl;
  cin >> langage;

  if (langage == 'a')
    cout << "Welcome to ProjetEuclide." << endl;
  else if (langage == 'f')
    cout << "Bienvenue au ProjetEuclide." << endl;
  else if (langage == 'g')
    cout << "Guten Tag, ProjetEuclide." << endl;
  else if (langage == 'i')
    cout << "Bon giorno, ProjetEuclide." << endl;
  else if (langage == 'r')
    cout << "Dobre utre, ProjetEuclide." << endl;
  else
    cout << "Desole, nous ne parlons pas votre langue." << endl;

  return 0;
}
