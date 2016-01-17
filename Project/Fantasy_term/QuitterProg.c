/*
QuitterProg.c
---------------------

By Psyko

Rôle : Permet de quitter le Programme .
Dernère date de modification : 30/11/2011.
*/

#include <stdio.h>
#include <stdlib.h>

int Quitter() {
  char quit = 'a';
  int continu = 1;

  printf("Etes-vous sur de vouloir quitter le programme ? (o/n)");
  scanf("%s", &quit);

  while (!(continu)) {
    if (quit == 'o' || quit == 'O') {
      system("cls");
      printf("\n\nA bientot !!\n\n");
      exit(EXIT_SUCCESS);
    } else if (quit == 'n' || quit == 'N') {
      return 0;
    } else {
      continu = 1;
      printf("Votre saisie a ete mal comprise\nTapez o pour oui ou n pour non "
             ":\n");
      scanf("%s", &quit);
    }
  }
}
