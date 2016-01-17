/*
main.h
---------------------

By Psyko

Rôle : contient les headers des fonctions et les constantes communes.
Dernère date de modification : 30/11/2011.
*/

#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES

//#define

enum Race { HUMAIN = 1, ELFE = 2, NAIN = 3 };
enum Metier { GUERRIER = 1, ARCHER = 2, MAGE = 3 };
enum Sexe { HOMME = 1, FEMME = 2 };

typedef struct {
  int HP, Exp, Att, Mag, Esq;
  enum Race race;
  enum Metier metier;
  enum Sexe sexe;
  char name[50];
} Perso;

#endif
