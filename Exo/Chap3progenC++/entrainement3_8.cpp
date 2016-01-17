// Programme qui simule une calculatrice

#include <iostream>

using namespace std;

int main() {

  int n1, n2;
  char operateur;

  cout << "Le premier nombre entier positif est : " << endl;
  cin >> n1;

  cout << "Le deuxieme nombre entier positif est : " << endl;
  cin >> n2;

  cout << "\t \t  Quelle est l operation a effectuee ? \n \t \t \t(+ , - , * , "
          "/ et %) : ";
  cin >> operateur;

  switch (operateur) {
  case '+':
    cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
    break;
  case '-':
    cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
    break;
  case '*':
    cout << n1 << " * " << n2 << " = " << (n1 * n2) << endl;
    break;
  case '/':
    cout << n1 << " / " << n2 << " = " << (n1 / n2) << endl;
    break;
  case '%':
    cout << n1 << " % " << n2 << " = " << (n1 % n2) << endl;
    break;
  default:
    cout << "Erreur de saisie : veuillez relancer la calculatrice." << endl;
  }

  return 0;
}
