// Programme permettant a l'utilisateur de saisir "O" ou "o" pour signifier
// "oui"

#include <iostream>

using namespace std;

int main() {

  char rep;

  cout << "Etes-vous inscrit ? (o/n) : " << endl;
  cin >> rep;

  if (rep == 'O' || rep == 'o')
    cout << "Vous etes inscrit." << endl;
  else
    cout << "Vous n'etes pas inscrit." << endl;

  return 0;
}
