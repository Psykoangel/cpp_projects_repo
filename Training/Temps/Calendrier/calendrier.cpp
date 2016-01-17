#include <stdio.h>
#include <stdlib.h>

void usage(void);
int estBissextile(unsigned);
static unsigned moisVersJour(unsigned);
static long anneesVersJours(unsigned);
long dateVersScalaire(unsigned, unsigned, unsigned);

int jours[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *mois[12] = {"Janvier",   "Fevrier",  "Mars",     "Avril",
                  "Mais",      "Juin",     "Juillet",  "Aout",
                  "Septembre", "Octembre", "Novembre", "Decembre"};
char *nomJours[8] = {"Dim", "Lun", "Mar", "Mer", "Jeu", "Ven", "Sam", "Dim"};

const char *ligne = "";

int main(int argc, char *argv[]) {

  int jour, jour1, jourNb, i, j;
  unsigned an, mo;

  /*si les argument passer en parametre sont incorrect ou pas assez nombreux
  pour eviter d'avoir des fichier core on affihe un message d'aide plutot
  que de continuer le reste du programme*/
  if (argc < 3 && argc > 1)
    usage();

  if (argc < 3)
    usage();

  // si le nombre d'argument est correct
  if (argc >= 3) {
    an = atoi(argv[2]);
    mo = atoi(argv[1]);
  }

  // verification si le mois de fevrier est a 28 jours ou 29 jours
  jourNb = jours[mo - 1];

  if (2 == mo && estBissextile(an))
    ++jourNb;

  // Cela sert a faire demarrer le calendrier par le Lundi
  jour1 = (int)((dateVersScalaire(an, mo, 1) - (long)1) % 7L);

  fputs(ligne, stdout); // on affiche la valeur de ligne dnas la sortie stndard

  printf("\nMois de %s de l'annee %d\n\n", mois[mo - 1], an);

  // On affiche tous les jours (lundi, mardi, mercredi, ect...)
  for (j = 0; j < 7;) {
    fputs(nomJours[1 + j],
          stdout); // verifie la norme ISO pour savoir ou commencer

    if (7 != ++j) // on veriifie pas que notre semaine fait plus de 7 jours :o)
      fputc(' ', stdout); // affiche un espace entre chacque jours
  }

  printf("\n%s", ligne);

  // on affiche un espace jusqu'a ce que l'on tombe sur le premier jour du mois
  for (jour = 0; jour < jour1; ++jour)
    fputs("  ", stdout);

  // t bein ici on affiche les jours tous simplment :-)
  for (jour = 1; jour <= jourNb; ++jour, ++jour1, jour1 %= 7) {
    if (!jour1 && 1 != jour)
      printf("\b%s\n%s", ligne, ligne);

    printf("%3d ", jour);
  }

  /*on met des epasce dans les jorus de la semaine si par exemple le 31 est un
  jeudi
  et bien le vendredi, samedi et dimanche seront remplacer par des espace*/
  for (; jour1; ++jour1, jour1 %= 7)
    fputs("  ", stdout);

  fputc('\n', stdout);

  return EXIT_SUCCESS;
}

// Fonction affichant une petite aide
void usage(void) {
  puts("Utilisation: ./cal [m y]");
  puts("ou: m = mois (1 - 12)");
  puts("     y = annee (1800 - 3000)");
  exit(EXIT_FAILURE);
}

// Fonction calculant la probailite que ce soint uen annee bissextile ou non
int estBissextile(unsigned annee) {
  return annee % 400 == 0 ||
         (annee % 4 == 0 && annee % 100 != 0); // c'est vrai que les 2 sont
                                               // super util enssemble mais au
                                               // moins ca evite certains de
                                               // problemes
}

static unsigned moisVersJour(unsigned mois) {
  return (mois * 3057 - 3007) / 100;
}

static long anneesVersJours(unsigned annee) {
  return annee * 365L + annee / 4 - annee / 100 + annee / 400;
}

long dateVersScalaire(unsigned annee, unsigned mois, unsigned jour) {

  long scalaire;

  scalaire = jour + moisVersJour(mois);

  if (mois > 2) /* Verification si c'est uen annee bissextile*/
    scalaire -= estBissextile(annee) ? 1 : 2;

  annee--;
  scalaire += anneesVersJours(annee);

  return scalaire;
}
