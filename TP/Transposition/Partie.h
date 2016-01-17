#ifndef Partie_H
#define Partie_H

#include <string>
#include "Plateau.h"
using namespace std;
/**Cette classe représente l'interface Homme Machine
 */
class Partie {
private:
  /**Le nombre de mines au début de la partie*/
  int nbMineInitiale;
  /**Le nombre de mine restante*/
  int nbMineRestante;
  /**Le niveau de la prtie*/
  string niveau;
  /**Le nom du joueur*/
  string joueur;
  /**Le plateau de la partie en cours*/
  Plateau p;
  /**Méthode permettant d'interragir avec le joueur*/
  int choixJoueur();

public:
  /**Constructeur par défaut*/
  Partie();
  /**Constructeur*/
  Partie(int, string, string);
  /**Affichage de la partie*/
  void affiche();
  /**permet de savoir si la partie peut continuer*/
  bool jouer();
  /**permet un tour de jeux en fonction du choix du joueur
   *Le joueur peut marquée ou démasquée une mine
   *Dans cette correction le joueur peut uniquement démaquée des mines
   */
  bool jouer(int);
};

#endif
