/*
affichage_.c
---------------------

By Psyko

Rôle : affiche "Bienvenue sur Fantasy" en ascci art.
Dernère date de modification : 30/11/2011.
*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void aff_Bienvenue() {

  //--ascii art = Bienvenue--
  printf("______  _ \n| ___ \\(_) \n| |_/ / _   ___  _ __ __   __ ___  _ __   "
         "_   _   ___ \n| ___ \\| | / _ \\| '_ \\\\ \\ / // _ \\| '_ \\ | | | "
         "| / _ \\ \n| |_/ /| ||  __/| | | |\\ V /|  __/| | | || |_| ||  __/ "
         "\n\\____/ |_| \\___||_| |_| \\_/  \\___||_| |_| \\__,_| \\___| \n");
  //--ascii art = sur--
  printf(".-----..--.--..----.\n|__ --||  |  ||   _|\n|_____||_____||__|\n");
  // ascii art = Fantasy--
  printf(" _______  _______  _       _________ _______  _______\n(  ____ \\(  "
         "___  )( (    /|\\__   __/(  ___  )(  ____ \\|\\     /|\n| (    \\/| "
         "(   ) ||  \\  ( |   ) (   | (   ) || (    \\/( \\   / )\n| (__    | "
         "(___) ||   \\ | |   | |   | (___) || (_____  \\ (_) /\n|  __)   |  "
         "___  || (\\ \\) |   | |   |  ___  |(_____  )  \\   /\n| (      | (   "
         ") || | \\   |   | |   | (   ) |      ) |   ) (\n| )      | )   ( || "
         ")  \\  |   | |   | )   ( |/\\____) |   | |\n|/       |/     \\||/    "
         ")_)   )_(   |/     \\|\\_______)   \\_/\n");

  printf("\n\n\n\n\n");
}

void aff_menuPrincipal() {

  printf("\n\nMenu de FANTASY\n\n");
  printf("1 : Nouvelle Partie\n2 : Continuer\n3 : Quitter le Jeu\n");
}

void aff_sexe(Perso joueur) {
  do {

    switch (joueur.sexe) {
    case 1:
      printf("%s, tu es un Homme !!\n\n", joueur.name);
      break;
    case 2:
      printf("%s, tu es une Femme !!\n\n", joueur.name);
      break;
    default:
      printf("Je n'ai pas compris ce que tu étais...\n\n");
      scanf("%d", &joueur.sexe);
    }
  } while (joueur.sexe < 1 || joueur.sexe > 2);
}

void aff_race(Perso joueur) {
  do {

    switch (joueur.race) {
    case 1:
      printf("%s, tu es donc un Humain !!\n\n", joueur.name);
      break;
    case 2:
      printf("%s, tu es donc un Elfe !!\n\n", joueur.name);
      break;
    case 3:
      printf("%s, tu es donc un Nain !!\n\n", joueur.name);
      break;
    default:
      printf("Je n'ai pas compris ce que tu étais...\n\n");
      scanf("%d", &joueur.race);
    }
  } while (joueur.race < 1 || joueur.race > 3);
}

void aff_metier(Perso joueur) {
  do {
    switch (joueur.metier) {
    case 1:
      printf("%s, tu es donc un Guerrier !!\n\n", joueur.name);
      break;
    case 2:
      printf("%s, tu es donc un Archer !!\n\n", joueur.name);
      break;
    case 3:
      printf("%s, tu es donc un Mage !!\n\n", joueur.name);
      break;
    default:
      printf("Je n'ai pas compris ce que tu étais...\n\n");
      scanf("%d", &joueur.metier);
    }
  } while (joueur.metier < 1 || joueur.metier > 3);
}
