/*
menu_EcranTitre.c
---------------------

By Psyko

Rôle : Propose Nouvelle Partie/COntinuer/Quitter et les fonctions associées.
Dernère date de modification : 30/11/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "affichage_.h"

int NewGame() {

  Perso joueur1;

  printf("\n\nSalut a toi, nouveau joueur\nComment t'appelles-tu ?\n");
  scanf("%s", joueur1.name);
  printf("\n\nEs-tu un Homme ou une Femme ?");
  printf("\n1: Homme\n2: Femme\n");
  scanf("%d", &joueur1.sexe);

  aff_sexe(joueur1);

  system("PAUSE");
  system("cls");

  printf("\n\nDe quel race es-tu, %s ?", joueur1.name);
  printf("\n1: Humain\n2: Elfe\n3: Nain\n");
  scanf("%d", &joueur1.race);

  aff_race(joueur1);

  system("PAUSE");
  system("cls");

  printf("\nEt de quel metier es-tu ?");
  printf("\n1: Guerrier\n2: Archer\n3: Mage\n");
  scanf("%d", &joueur1.metier);

  aff_metier(joueur1);

  system("PAUSE");
  system("cls");

  return 0;
}

int continuGame() {
  FILE *sauveG = NULL;
  Perso joueur1;
  // char nameSauvG[20] = {0};

  sauveG = fopen("save.save", "r");
  if (sauveG == NULL) {
    printf("Impossible d'ouvrir le fichier.\nCe fichier n'existe peut-être "
           "pas.\n");
    return -1;
  }

  fscanf(sauveG, "%s %d %d %d %d %d %d %d %d", joueur1.name, &joueur1.sexe,
         &joueur1.race, &joueur1.metier, &joueur1.HP, &joueur1.Exp,
         &joueur1.Att, &joueur1.Mag, &joueur1.Esq);

  printf("\n\nTu es %s\n\n", joueur1.name);

  aff_sexe(joueur1);
  aff_race(joueur1);
  aff_metier(joueur1);

  printf("\n                                 Bon retour dans le jeu !!\n\n");

  fclose(sauveG);

  return 0;
}
