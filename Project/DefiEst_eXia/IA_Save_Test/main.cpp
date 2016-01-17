#include <iostream>
#include <time.h>

#include "Scene.h"

using namespace std;

int main()
{
    cout << "-- Base de test : IA --" << endl << endl;

    srand(time(NULL));
    // -- Test de l'IA --

    Scene* scene = new Scene();


    cout << "-- Fin de la procedure de test --" << endl;
    return 0;
}
