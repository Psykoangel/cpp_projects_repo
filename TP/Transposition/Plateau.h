#ifndef Plateau_H
#define Plateau_H

#include "Case.h"
/**La classe plateau représente un plateau créer lors du début de la partie
 *C'est la classe qui gère la collection de Case.
 */
class Plateau {
private:
  /**C'est le nombre de ligne*/
  int longueur;
  /**C'est le nombre de colonne*/
  int largeur;
  /**C'est un tableau à 2 dimension de Case
   *Il sera alloué dynamiquement dans le constructeur
   */
  Case **plateau;

public:
  /**Constructeur par défaut
   *Il crée un plateau de taille 10X10
   */
  Plateau();
  /**constructeur*/
  Plateau(int, int);
  /**Initialise les cases minées aléatoirement dans le plateau*/
  void init(int);
  /**Affichage du plateau*/
  void affiche();
  /**découvre une case du plateau et retourne vrai si la case est minée*/
  bool decouvrir(int, int);
};

#endif
