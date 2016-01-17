
#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom("Ep�e rouill�e"), m_degats(10) {}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats) {}

void Arme::changer(string nom, int degats) {
  m_nom = nom;
  m_degats = degats;
}

void Arme::afficher() {
  cout << "Arme : " << m_nom << " (D�g�ts : " << m_degats << ")" << endl;
}

int Arme::getDegats() const { return m_degats; }
