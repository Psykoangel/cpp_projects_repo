#include <stdio.h>   //
#include <conio>     // identification des bibliotheques
#include <windows.h> //

static int main(void) {

  int m, h, c; // m=minute  h=heure c=chargement
  int s = 0;   // s=seconde

  do {
    printf("entrer l'heure:");
    scanf("%d", &h); // indique la valeur des heures ds h
  } while (h < 0 or h > 23);

  clrscr();

  do {
    printf("entrer les minutes:");
    scanf("%d", &m); // indique la valeure des minute ds m
  } while (h < 0 or m > 59);

  clrscr();

  printf("chargement...");

  for (c = 1; c < 80;
       c++) // permet le deplacement de la premiere colonne a la 80 unieme
  {
    textbackground(1); // on met l'arriere plan en bleu

    gotoxy(c, 5); // on le place sur la 3 lignes

    cprintf(" "); // le "c" (color) pour indiquer que txt srat de la couleur 1

    Sleep(45); // on attend 45 milliemes de secondes avant de recommencer la
               // boucle
  }

  textbackground(0); // on remet l'arriere plan en noir

  clrscr(); // on efface la barre de chargement

  while (true) // tant que vrai
  {
    gotoxy(28, 13.5); // on place l'heure o milieux de l'ecran

    printf("[%d Heure(s) %d Minute(s) %d Seconde(s)]", h, m,
           s); // indique heure minute seconde sur l'ecran

    Sleep(1000); // attend 1 seconde

    s++; // ajoute 1 secone(seconde=seconde+1) aux seconde actuelle

    gotoxy(28, 13.5);

    printf("[%d Heure(s) %d Minute(s) %d Seconde(s)]", h, m, s);

    _setcursortype(_NOCURSOR); // on enleve le curseur pour faire mieux

    if (s == 60) // si il y 1 minute soit 60 seconde
    {
      s = 0; // on remet seconde a 0
      m++;   // et on ajoute une minute a l'heure actuelle
    }

    if (m == 60) // si on a 60 min soit une heure
    {
      m = 0; // on remet minute a 0
      h++;   // et on ajoute une heure a l'heure actuelle
    }

    if (h == 24) // si on a 24 heures
    {
      h = 0; // on a juste a remettre heure a 0
    }
  }

  return 0;
}
