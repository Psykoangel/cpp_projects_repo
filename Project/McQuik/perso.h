#ifndef PERSO_HPP
#define PERSO_HPP

#include <string>

class Perso {
public:
  Perso();
  Perso(std::string add_nom, std::string add_prenom);
  Perso(std::string add_nom, std::string add_prenom, std::string add_naissance,
        int add_poids);
  void aller_au_McQuick();
  void afficher_recap();
  virtual void dormir();
  std::string recup_nom();
  int get_poids();

private:
  std::string naissance;
  int poids;

protected:
  std::string nom;
  std::string prenom;
};
#endif // PERSO_HPP
