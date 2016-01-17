// Illustre les variables imbriquees et paralleles

#include <iostream>

using namespace std;

int x = 11; // La portee de x est globale

int main() { // Debut de la portee de main()

  int x = 22;

  { // Ici debute la portee du bloc interne
    int x = 33;

    cout << "Dans le bloc a l'interieur de main() : x = " << x << endl;
  } // Fin de la portee du bloc interne

  cout << "Dans main(): x = " << x << endl;
  cout << "Dans main(): ::x = " << ::x << endl; // Operateur de resolution de
                                                // portee :: accede a la
                                                // variable globale x
  return 0;
} // Fin de la portee de main()
