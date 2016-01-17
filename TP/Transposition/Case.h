#ifndef Case_H
#define Case_H

/**La classe case représente une case.
 *elle peut être minée ou non, masquée ou non.
 *Si elle n'est pas minée elle contient alors le nombre de mine dans laes cases
 *adjacente
 */
class Case {
private:
  /**le numéro de la ligne commençant par 0*/
  int x;
  /**Le numéro de la colonne commençant par 0*/
  int y;
  /**Le nombre mine dans les cases voisine*/
  int nbMineVoisine;
  /**indique si la case est minée ou non*/
  bool mine;
  /**indique si la case est masquée ou non*/
  bool masquee;

public:
  /**Le constructeur par défaut*/
  Case();
  /**Le constructeur*/
  Case(int, int, int, bool);
  /**affichage d'une case*/
  void affiche();
  /**Modifie l'attribut mine de la case*/
  void caseMine(bool);
  /**rend la case découverte*/
  bool decouvrir();
};

#endif
