#include <iostream>

using namespace std;

int main() {
  // Imprime les sequences d'echappement
  cout << " Imprime \"\\nXXYY\" : "
       << "\nXXYY" << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime \"\\nXX\\bYY\" : "
       << "\n\XX\bYY" << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime \"\\n\\tXX\\tYY\" : "
       << "\n\tXX\tYY" << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime le caractere \'\\a\' : " << '\a' << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime le caractere \'\\r\' : " << '\r' << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime le caractere \'\\v\' : " << '\v' << endl;
  cout << "----------------------------------------------" << endl;
  cout << " Imprime le caractere \'\\?\' : " << '\?' << endl;
  cout << "----------------------------------------------" << endl;
  return 0;
}
