// Affiche les tailles necessaires au stockage des types fondamentaux

#include <iostream>
#include <cfloat> // Definit les constantes FLT

using namespace std;

int main() {

  int fbits = 8 * sizeof(float); // Chaque octet contient 8 bits

  cout << "Un float utilise " << fbits << " bits :\n \t";
  cout << FLT_MANT_DIG - 1 << " bits pour sa mantisse, \n \t";
  cout << fbits - FLT_MANT_DIG << " bits pour son exposant, \n \t";
  cout << 1 << " bit pour son signe, \n \t";
  cout << "pour obtenir : une valeur a virgule flottante de \n" << FLT_DIG;
  cout << " chiffres significatifs \n";
  cout << "avec une valeur minimum egale a : " << FLT_MIN << endl;
  cout << "et une valeur maximum egale a : " << FLT_MAX << endl;

  return 0;
}
