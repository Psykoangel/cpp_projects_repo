// Programme trouvant le nombre compris entre 1 et 8 que l'utilisateur a choisi

#include <iostream>

using namespace std;

int main() {

  char rep;

  cout << "Choisissez un nombre compris entre 1 et 8. " << endl;
  cout << "Est-il inferieur a 5 ? (o/n) : " << endl;
  cin >> rep;

  if (rep == 'o' || rep == 'O') // 1 <= n <= 4
  {
    cout << "Est-il inferieur a 3 ? (o/n) : " << endl;
    cin >> rep;

    if (rep == 'o' || rep == 'O') // 1 <= n <= 2
    {
      cout << "Est-il inferieur a 2 ? (o/n) : " << endl;
      cin >> rep;
      if (rep == 'o' || rep == 'O')
        cout << "Votre nombre est 1." << endl;
      else
        cout << "Votre nombre est 2." << endl;

    } else // 3 <= n <= 4
    {
      cout << "Est-il inferieur a 4 ? (o/n) : " << endl;
      cin >> rep;

      if (rep == 'o' || rep == 'O')
        cout << "Votre nombre est 3." << endl;
      else
        cout << "Votre nombre est 4." << endl;
    }
  } else // 5 <= n <= 8
  {
    cout << "Est-il inferieur a 7 ? (o/n) : " << endl;
    cin >> rep;

    if (rep == 'o' || rep == 'O') // 5 <= n <= 6
    {
      cout << "Est-il inferieur a 6 ? (o/n) : " << endl;
      cin >> rep;

      if (rep == 'o' || rep == 'O')
        cout << "Votre nombre est 5." << endl;
      else
        cout << "Votre nombre est 6." << endl;

    } else // 7 <= n <= 8
    {
      cout << "Est-il inferieur a 8 ? (o/n) : " << endl;
      cin >> rep;

      if (rep == 'o' || rep == 'O')
        cout << "Votre nombre est 7." << endl;
      else
        cout << "Votre nombre est 8." << endl;
    }
  }

  return 0;
}
