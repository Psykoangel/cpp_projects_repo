#include <iostream.h>

int main() {

  int x, adulte, enfant;
  float P, I, N, A, B, C, R;

  cout << "Revenu brut en euros: ";
  cin >> A;
  cout << "Frais reel ou non reel ? (1=oui 2=non):  ";
  cin >> x;

  if (x == 1) {
    cout << "Frais reel en euros: ";
    cin >> B;
  } else {
    B = A * 0.1;

    if (B > 12648) {
      B = 12648;
    }
  }

  C = 0.2 * (A - B);

  if (C > 23180) {
    C = 23180;
  }

  R = A - (B + C);

  cout << "R vaut: " << R << endl;
  cout << "Nombre d'adulte dans la famille ?: ";
  cin >> adulte;

  cout << "Nombre d'enfant dans la famille ?: ";
  cin >> enfant;

  if (enfant >= 3) {
    N = adulte + enfant - 1;
  } else {
    N = 0.5 * enfant + adulte;
  }

  cout << "Le nombre de part est: " << N << endl;
  P = R / N;
  cout << "R/N vaut: " << P << endl;

  if (R / N <= 4262) {
    cout << "aucun impot a payer !" << endl;
  } else {
    if (4262 <= R / N <= 8382) {
      I = R * 0.0683 - 291.09 * N;
      cout << "l'impot a payer est de: " << I << " Euros par an.";
      cout << " ou " << I / 12 << " Euros par mois." << endl;

    } else {
      if (8382 <= R / N <= 14753) {
        I = R * 0.1914 - 1322.92 * N;
        cout << "l'impot a payer est de: " << I << " Euros par an.";
        cout << " ou " << I / 12 << " Euros par mois." << endl;

      } else {
        if (14753 <= R / N <= 23888) {
          I = R * 0.2826 - 2668.39 * N;
          cout << "l'impot a payer est de: " << I << " Euros par an.";
          cout << " ou " << I / 12 << " Euros par mois." << endl;

        } else {
          if (23888 <= R / N <= 38868) {
            I = R * 0.3738 - 4846.98 * N;
            cout << "l'impot a payer est de: " << I << " Euros par an.";
            cout << " ou " << I / 12 << " Euros par mois." << endl;

          } else {
            if (38868 <= R / N <= 47932) {
              I = R * 0.4262 - 6883.66 * N;
              cout << "l'impot a payer est de: " << I << " Euros par an.";
              cout << " ou " << I / 12 << " Euros par mois." << endl;

            } else {
              if (47932 < R / N) {
                I = R * 0.4809 - 9505.54 * N;
                cout << "l'impot a payer est de: " << I << " Euros par an.";
                cout << " ou " << I / 12 << " Euros par mois." << endl;
              }
            }
          }
        }
      }
    }
  }

  return 0;
}
