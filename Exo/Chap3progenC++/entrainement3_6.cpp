// Programme qui lit l'age de l'utilisateur et qui affiche ensuite un message
// d'apres son age

#include <iostream>

using namespace std;

int main() {

  int age;

  cout << "Entrez votre age : " << endl;
  cin >> age;

  if (age < 18)
    cout << "Vous etes un enfant." << endl;

  if (age >= 18 && age < 65)
    cout << "Vous etes un adulte." << endl;

  if (age >= 65)
    cout << "Vous etes une personne agee." << endl;

  return 0;
}
