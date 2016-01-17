// Programme qui convertit un score de test en notes

#include <iostream>

using namespace std;

int main() {

  int score;

  cout << "Entrez le score de votre test : " << endl;
  cin >> score;

  switch (score / 10) {
  case 10:
  case 9:
    cout << "Votre note est A." << endl;
    break;
  case 8:
    cout << "Votre note est B." << endl;
    break;
  case 7:
    cout << "Votre note est C." << endl;
    break;
  case 6:
    cout << "Votre note est D." << endl;
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    cout << "Votre note est F." << endl;
    break;
  default:
    cout << "Erreur : ce score n'entre pas dans la plage." << endl;
  }

  cout << "Au revoir." << endl;

  return 0;
}
