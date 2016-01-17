#include <iostream>
#include <cstdlib>

using namespace std;

class de {
private:
  int nb_faces;
  int value;

public:
  void afficher() { cout << value - nb_faces << endl; }

  int lancer() { return (rand() % nb_faces + 1); }
};

int main() {
  de *de_one = new de();
  de *de_two = new de();
  int nb = 0;

  while (nb <= 100) {

    nb++;
  }

  return EXIT_SUCCESS;
}
