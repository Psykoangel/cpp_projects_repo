#include <iostream>

using namespace std;

int main() {
  char ch1 = 130; // Correspond a la lettre e du tableau ascii
  char ch2 = 138; // Correspond a la lettre e du tableau ascii
  // Teste l'entree d'entiers, de flottants et de caracteres
  int m, n;
  // Type d'objet int
  cout << "Entrez deux entiers : \n";
  // On informe l'utilisateur de ce qu'il devra faire
  cin >> m >> n;
  // La saisie au clavier affecte les valeurs aux variables m et n
  cout << "m = " << m << " ,n = " << n << endl;
  // Affiche ensuite les differentes valeurs affectees aux variables
  double x, y, z;
  // Type d'objet double
  cout << "Entrez trois nombres d" << ch1 << "cimaux : \n";
  // On informe l'utilisateur de ce qu'il devra faire
  cin >> x >> y >> z;
  // La saisie au clavier affecte les valeurs aux variables x, y et z
  cout << "x = " << x << " ,y = " << y << " et z = " << z << endl;
  // Affiche ensuite les differentes valeurs affectees aux variables
  char c1, c2, c3, c4;
  // Type d'objet char
  cout << "Entre quatre caract" << ch2 << "res : \n";
  // On informe l'utilisateur de ce qu'il devra faire
  cin >> c1 >> c2 >> c3 >> c4;
  // La saisie au clavier affecte les valeurs aux variables c1, c2, c3 et c4
  cout << "c1 = " << c1 << " c2 = " << c2 << " c3 = " << c3 << " et c4 = " << c4
       << endl;
  // Affiche ensuite les differentes valeurs affectees aux variables
  return 0;
}
