#include <iostream>

using namespace std;

int main() {
  // Imprime les valeurs d'un depassement negatif pour un short int
  short m = 0;
  cout << "m = " << m << endl;
  m -= 10000; // m doit �tre de -10,000
  cout << "m = " << m << endl;
  m -= 10000; // m doit �tre de -20,000
  cout << "m = " << m << endl;
  m -= 10000; // m doit �tre de -30,000
  cout << "m = " << m << endl;
  m -= 10000; // m doit �tre de -40,000
  cout << "m = " << m << endl;
  return 0;
}
