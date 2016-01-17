// Programme qui convertit un score de test en notes

#include <iostream>

using namespace std;

int main() {

  int score;
  cout << "Entrez lz score de votre test : " << endl;
  cin >> score;

  if (score > 100)
    cout << "Erreur : ce score n'entre pas dans la plage." << endl;
  else if (score >= 90)
    cout << "Votre note est A." << endl;
  else if (score >= 80)
    cout << "Votre note est B." << endl;
  else if (score >= 70)
    cout << "Votre note est C." << endl;
  else if (score >= 60)
    cout << "Votre note est D." << endl;
  else if (score >= 0)
    cout << "Votre note est F." << endl;
  else
    cout << "Erreur : ce score n'entre pas dans la plage." << endl;

  return 0;
}
