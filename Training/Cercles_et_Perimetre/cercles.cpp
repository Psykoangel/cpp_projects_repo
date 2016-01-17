/*Algorithme calculant les coordonnees de deux cercles et permettant de savoir
 * les interactions qu ils ont entre eux.*/

#include <math.h>
#include <iostream.h>

using namespace std;

int main() {

  float xA, yA, xB, yB, rA, rB;
  float dAB, dEXT, dINT;

  cout << "Entrer la valeur de xA :" << endl;
  cin >> xA;

  cout << "Entrer la valeur de yA :" << endl;
  cin >> yA;

  cout << "Entrer la valeur de xB :" << endl;
  cin >> xB;

  cout << "Entrer la valeur de yB :" << endl;
  cin >> yB;

  cout << "Entrer la valeur de rA :" << endl;
  cin >> rA;

  cout << "Entrer la valeur de rB :" << endl;
  cin >> rB;

  dAB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
  dEXT = rA + rB;
  dINT = fabs(rA - rB);

  if (dAB > dEXT) {
    cout << "Les cercles sont exterieurs" << endl;
  } else if (dAB == dEXT) {
    cout << "Les cercles sont tangeants exterieurement" << endl;
  } else if ((dAB > dINT) && (dAB < dEXT)) {
    cout << "Les cercles sont secants" << endl;
  } else if (dAB == dINT) {
    cout << "Les cercles sont tangeants interieurement" << endl;
  } else if (dAB < dINT) {
    cout << "Les cerles sont interieurs" << endl;
  }
}
