// Programme utilisant le meme n pour trois variables differentes

#include <iostream>

using namespace std;

int main() {

  int n = 44;
  cout << "n = " << n << endl;

  {
    int n; // La portee s'etend sur 4 lignes
    cout << "Entrez un entier positif : " << endl;
    cin >> n;

    cout << "n = " << n << endl;
  }

  {
    cout << "n = " << n << endl; // La variable n declaree en premier
  }

  {
    int n; // La portee s'etend sur 2 lignes
    cout << "n = " << n << endl;
  }

  cout << "n = " << n << endl; // La variable n declaree en premier

  return 0;
}
