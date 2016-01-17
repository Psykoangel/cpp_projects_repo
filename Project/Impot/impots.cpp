#include <iostream.h>

int main() {

  int choix, Rbrut, NA, NE;
  double N, N1, N2, Rev, Abat, Frais, I;

  cout << "Entrer le Revenu brut en euros" << endl;
  cin >> Rbrut;

  cout << "Pour entrer vos frais reels tapez 1 sinon tapez 2" << endl;
  cin >> choix;

  if (choix == 2) {
    Frais = ((0.1) * (Rbrut));

    if (Frais <= 12648) {
      Frais = Frais;

    } else {
      Frais = 12648;
    }

  } else {
    cout << "Entrer vos frais reel " << endl;
    cin >> Frais;
  }

  cout << "Vos frais reels sont de :" << Frais << " euro" << endl;
  Abat = (0.2) * (Rbrut - Frais);

  if (Abat <= 23180) {
    Abat = Abat;

  } else {
    Abat = 23180;
  }

  cout << "Votre abattement est de :" << Abat << " euros" << endl;

  Rev = Rbrut - Frais - Abat;
  cout << "Votre revenu est de :" << Rev << " euros" << endl;

  cout << "NOMBRE DE PART" << endl;

  cout << "Nombre d'adulte ?" << endl;
  cin >> NA;

  cout << "Nombre d'enfants ?" << endl;
  cin >> NE;

  if (NE <= 2) {
    N = (NA * 1 + (NE * 0.5));

  } else {
    N = (NA * 1) + (2 * 0.5) + (NE - 2);
  }

  cout << "Le nombre de part est de :" << N << endl;

  if (Rev / N <= 4262) {
    cout << "Vous n'avez pas d'impots � payer" << endl;
  }

  if (Rev / N >= 4262 && Rev / N <= 8382) {
    I = Rev * 0.0083 - 291.09 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  if (Rev / N >= 8382 && Rev / N <= 14753) {
    I = Rev * 0.01914 - 1322.92 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  if (Rev / N >= 14753 && Rev / N <= 23888) {
    I = Rev * 0.2826 - 2668.39 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  if (Rev / N >= 23888 && Rev / N <= 38865) {
    I = Rev * 0.3730 - 4846.98 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  if (Rev / N >= 38865 && Rev / N <= 47932) {
    I = Rev * 0.4262 - 6862.66 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  if (Rev / N >= 47932) {
    I = Rev * 0.4809 - 9505.54 * N;
    cout << "Votre impot s'eleve a : " << I << " euros" << endl;
  }

  return 0;
}
