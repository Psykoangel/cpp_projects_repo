// Affiche certaines constantes stockees dans le fichier d'en-tete <climits>

#include <iostream>
#include <climits> // Definit les constantes SHRT_MIN, etc...

using namespace std;

int main() {

  cout << "minimum d'un short : " << SHRT_MIN << endl;
  cout << "maximum d'un short : " << SHRT_MAX << endl;
  cout << "minimum d'un unsigned short : " << 0 << endl;
  cout << "maximum d'un unsigned short : " << USHRT_MAX << endl;
  cout << "minimum d'un int : " << INT_MIN << endl;
  cout << "maximum d'un int : " << INT_MAX << endl;
  cout << "minimum d'un unsigned int : " << 0 << endl;
  cout << "maximum d'un unsigned int : " << UINT_MAX << endl;
  cout << "minimum d'un long : " << LONG_MIN << endl;
  cout << "maximum d'un long : " << LONG_MAX << endl;
  cout << "minimum d'un unsigned long : " << 0 << endl;
  cout << "maximum d'un unsigned long : " << ULONG_MAX << endl;

  return 0;
}
