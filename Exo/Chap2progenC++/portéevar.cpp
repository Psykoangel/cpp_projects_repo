// Imprime la portee de variables

#include <iostream>

using namespace std;

int main() {

  x = 11; // ERREUR : nous ne sommes pas dans la portee de x
  int x;

  {
    x = 22; // OK : nous sommes dans la portee de x
    y = 33; // ERREUR : nous ne sommes pas dans la portee de y
    int y;

    x = 44; // OK : nous sommes dans la portee de x
    y = 55; // OK : nous sommes dans la portee de y
  }

  x = 66; // OK : nous sommes dans la portee de x
  y = 77; // ERREUR : nous ne sommes pas dans la portee de y

  return 0;
}
