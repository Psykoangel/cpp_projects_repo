/*
 **********************************************************
 *
 * Cours TP Info
 *
 * resume : Petit jeu du pendu qui consite a entrer un mot
 *	     puis de le faire deviner par un autre joueur.
 *
 ***********************************************************
 */

/*Permet l'utilisatin des flux d entree et sortie*/
#include <iostream>

/*Permet l'utilisation des "string" pour les chaines
de caracteres et les tableaux*/
#include <string>

using namespace std;

void nomsDesJoueurs();
/*Permet la saisie du mot par le joueur.*/
int SaisieDuMot();
/*Fonction o l'on devine le mot.*/
int DevinerMot();
/*Fonction qui teste si le caractere entree par le joueur
apparait dans le mot a deviner.*/
int carDansChaine();
/*Si la lettre a ete trouvee, elle est remplacee dans
la chaine de caractere cryptee.*/
int rplCarChaine();
/*Permet de savoir si le joueur a gagner ou non*/
int Reponse();
/*Permet de tester si la lettre a deja ete entree*/
int testLettreDev();
/*Permet de demander si l'on veut continuer ou quitter
le programme avec l'inclusion d'un teste sur la reponse*/
int question();
/*Fonction affichant le tableau des scrores.*/
void tableauScores();
/*Fonction gerant le renouvellement de la partie apres
10 manches jouees*/
void finDePartie();

// Variable pour la lettre entree
char lettreDevinee = 0;
// Definit le nombre de chance qu'il reste
int nbrChance = 0;
// Permet de comptabilise les scores des joueurs 1 et 2
int scoreJoueur1 = 0;
int scoreJoueur2 = 0;
// Permet l'affichage de G ou P selon le joueur gagnant
int Joueur1G = 0;
int Joueur2G = 0;
// Numero de la Partie en cours
int numeroPartie = 0;

// Mot saisi par le 1er joueur
string motSaisi = "";
// Mot que doit deviner le 2e joueur
string motADeviner = "";
// Contient les lettres deja entree
string lettresEntrees = "";
// Nom du Joueur 1 et 2
string Joueur1 = "";
string Joueur2 = "";
// Initialisation du tableau des scores
string tableauScoresL1_3_5_7 = "|";
string tableauScoresL2 = "|Num Manche";
string tableauScoresL4 = "|";
string tableauScoresL6 = "|";
string reponseQuestion = "non";

int cptTS = 0;

int main() {

  system("clear");

  cout << "\n\n\t\t/------------------------------\\\n"
       << "\t\t|Bienvenue dans le jeu du pendu.|\n"
       << "\t\t\\------------------------------/\n\n\n"
       << "\t\tCe jeu se joue a deux joueurs.\n"
       << "\tLe premier inscrit un mot du dictionnaire\n"
       << "\tfrancais, et le deuxieme doit le deviner.\n"
       << "\tPour ce faire il a droit a 11 chances aavant\n"
       << "\td'etre pendu.\n\n"
       << "\tLes points sont compt�de la facon suivante:\n"
       << "\t - Si le joueur 2 trouve il marque 1 point.\n"
       << "\t - Sinon le joueur 1 marque 1 point.\n\n"
       << "\tLe jeux se joue en 10 manches.\n"
       << "\tApres les 10 manches les scores finaux sont\n"
       << "\taffiches.\n"
       << "\tIl est possible de recommencer la partie a\n"
       << "\tvolonte.\n\n"
       << "\tLe programme se lancera dans:\n"
       << "\t\t3" << flush;

  sleep(1);
  cout << "\t2" << flush;
  sleep(1);
  cout << "\t1\n";
  sleep(1);

  nomsDesJoueurs();

  return 0;
}

/****************************************************************
La fonction nomDesJoueurs permet d'entrer le nom des 2 joueurs et
intialise le tableau des scores selon le nom des joueurs.
****************************************************************/

void nomsDesJoueurs() {
  // Compte le nombre de lettres dans le nom des joueurs
  int numlettres1 = 0;
  int numlettres2 = 0;
  // Compteurs locaux.
  int i = 0, j = 0, k = 0;

  system("clear");

  cout << "\n\tLes noms des joueurs ne doivent pas exceder\n"
       << "\t10 caracteres. Des probelems d'affichage\n"
       << "\tpourraient arriver. Mais celà n'est pas interdit!!\n";

  cout << "\n\tEntrer le nom du joueur 1:\n\t";
  cin >> Joueur1;

  cout << "\n\n\tEntrer le nom du joueur 2:\n\t";
  cin >> Joueur2;

  /********************************************************
  Le reste de la fonction initialise le tableau des scores
  en prennant en compte la taille du nom des joueurs afin
  de redefinir la taille de la 1er colonne.
  Le chiffre 10 correspond au nombre de lettre de
  "Num Partie", qui est la taille par defaut.
  ********************************************************/
  tableauScoresL1_3_5_7 = "|";
  tableauScoresL4 += Joueur1;
  tableauScoresL6 += Joueur2;
  numlettres1 = Joueur1.length();
  numlettres2 = Joueur2.length();

  if (numlettres1 < numlettres2) {
    if (10 < numlettres2) {
      while (i < numlettres2) {
        tableauScoresL1_3_5_7 += "-";
        i++;
      }
      while (k != numlettres2 - numlettres1) {
        tableauScoresL4 += " ";
        k++;
      }
      while (numlettres2 - j != 10) {
        tableauScoresL2 += " ";
        j++;
      }

    } else {
      while (numlettres2 - 10 != 0) {
        tableauScoresL1_3_5_7 = "|----------";
        tableauScoresL6 += " ";
        numlettres2++;
      }
      while (numlettres1 - 10 != 0) {
        tableauScoresL1_3_5_7 = "|----------";
        tableauScoresL4 += " ";
        numlettres1++;
      }
    }

  } else if (numlettres1 > numlettres2) {
    if (10 < numlettres1) {
      while (i < numlettres1) {
        tableauScoresL1_3_5_7 += "-";
        i++;
      }
      while (k != numlettres1 - numlettres2) {
        tableauScoresL6 += " ";
        k++;
      }
      while (numlettres1 - j != 10) {
        tableauScoresL2 += " ";
        j++;
      }

    } else {
      while (numlettres1 - 10 != 0) {
        tableauScoresL1_3_5_7 = "|----------";
        tableauScoresL4 += " ";
        numlettres1++;
      }
      while (numlettres2 - 10 != 0) {
        tableauScoresL1_3_5_7 = "|----------";
        tableauScoresL6 += " ";
        numlettres2++;
      }
    }

  } else if (numlettres1 == numlettres2) {
    if (10 < numlettres1) {
      while (i < numlettres1) {
        tableauScoresL1_3_5_7 += "-";
        i++;
      }
      while (k != numlettres1 - numlettres2) {
        tableauScoresL6 += " ";
        k++;
      }
      while (numlettres1 - j != 10) {
        tableauScoresL2 += " ";
        j++;
      }

    } else {
      while (numlettres1 - 10 != 0) {
        tableauScoresL1_3_5_7 = "|----------";
        tableauScoresL4 += " ";
        tableauScoresL6 += " ";
        numlettres1++;
      }
    }
  }

  tableauScoresL1_3_5_7 += "|";
  tableauScoresL2 += "|";
  tableauScoresL4 += "|";
  tableauScoresL6 += "|";

  SaisieDuMot();
}

/****************************************************************
La fonction SaisieDuMot permet la saisie du mot a chercher.
Le teste "if(numeroPartie % 2 == 0)" permet de savoir quel joueur
doit deviner ou faire deviner un mot.
Apres la 10e partie, car numeroPartie va de 0 a 9, la fonction
SaisieDuMot et ignorer.
*****************************************************************/

int SaisieDuMot() {

  int cpt = 0;

  if (numeroPartie <= 9) {
    system("clear");

    motSaisi = motADeviner = "";
    lettresEntrees = "";

    cout << "Numero de partie jouee: " << numeroPartie + 1 << "\n\n";

    cout << "Les scores sont:\n\t" << Joueur1 << ": " << scoreJoueur1 << "\n\t"
         << Joueur2 << ": " << scoreJoueur2 << "\n\n";

    if (numeroPartie % 2 == 0) {
      cout << "\n\t" << Joueur1 << ", entrez un mot:\n\t\t";

    } else {
      cout << "\n\t" << Joueur2 << ", entrez un mot:\n\t\t";
    }

    cin >> motSaisi;

    system("clear");

    while (cpt < motSaisi.length()) {
      motADeviner += '_';
      cpt++;
    }

    if (numeroPartie % 2 == 0) {
      cout << "\t" << Joueur2 << " devinez le mot.\n\tVous avez 11 chances.\n";

    } else {
      cout << "\t" << Joueur1 << " devinez le mot.\n\tVous avez 11 chances.\n";
    }

    cout << "\t\t" << motADeviner << "\n\n";
  }

  while (numeroPartie <= 9) {
    DevinerMot();
    Reponse();
  }
}

/****************************************************************
C'est la fonction qui permet de chercher le mot cacher ainsi que
d'afficher des renseignement sur la partie jouee:
 - les scores
 - le numero de la partie.
****************************************************************/
int DevinerMot() {

  /********************************************************
  nbrChance est incremente apres chaque erreur sauf si la
  lettre entree a deja ete entree. Dans ce cas l'erreur
  n'est pas comptabilisee.
  ********************************************************/
  if (nbrChance <= 10) {
    cout << "\tTapez une lettre.\n\t\t";
    cin >> lettreDevinee;

    if (testLettreDev() == 0) {
      lettresEntrees += lettreDevinee;
      if (carDansChaine() == 0) {
        nbrChance++;
      }
    }

    if (carDansChaine() == 1) {
      rplCarChaine();
    }

    system("clear");

    cout << "Lettres que vous aves deja essayees:\n\t" << lettresEntrees
         << "\n\n"
         << "L'avancement de la decouverte du mot est:\n\t" << motADeviner
         << "\n\n";

  } else {
    system("clear");

    cout << "Vous ete pendu!\n\t"
         << "_________\n\t"
         << " |/  |   \n\t"
         << " |   O   \n\t"
         << " |  /+\\ \n\t"
         << " |  / \\ \n\t"
         << " |       \n\t"
         << "-----    \n\n";

    if (numeroPartie % 2 == 0) {
      scoreJoueur1++;
      Joueur1G = 1;
      tableauScores();

    } else {
      scoreJoueur2++;
      Joueur2G = 1;
      tableauScores();
    }

    while (question() == 0) {
      cout << "\nCe n'est pas une reponse valable!\n"
           << "Veuillez en saisir une autre.\n\n";
    }
  }
}

int Reponse() {
  if (motSaisi == motADeviner) {
    cout << "Vous echappez a la pendaison!\n\t"
         << "_________\n\t"
         << " |/  |   \n\t"
         << " |   o   \n\t"
         << " |       \n\t"
         << " |    O/ \n\t"
         << " |   /+  \n\t"
         << "-----/ \\\n\n";

    if (numeroPartie % 2 == 0) {
      scoreJoueur2++;
      Joueur2G = 1;
      tableauScores();

    } else {
      scoreJoueur1++;
      Joueur1G = 1;
      tableauScores();
    }

    while (question() == 0) {
      cout << "\nCe n'est pas une reponse valable!\n"
           << "Veuillez en saisir une autre.\n\n";
    }

  } else {
    cout << "Il vous reste " << 11 - nbrChance << " chance(s).\n";
    cout << "Avancement de la pendaison:\n\t";

    switch (nbrChance) {
    case 0:
      cout << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\n";
      break;
    case 1:
      cout << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "         \n\t"
           << "-----    \n\n";
      break;
    case 2:
      cout << "         \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 3:
      cout << "_________\n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 4:
      cout << "_________\n\t"
           << " |/      \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 5:
      cout << "_________\n\t"
           << " |/  |   \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 6:
      cout << "_________\n\t"
           << " |/  |   \n\t"
           << " |   o   \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 7:
      cout << "_________\n\t"
           << " |/  |   \n\t"
           << " |   o   \n\t"
           << " |   +   \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 8:
      cout << "_________\n\t"
           << " |/  |   \n\t"
           << " |   o   \n\t"
           << " |   +\\ \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 9:
      cout << "_________\n\t"
           << " |/  |   \n\t"
           << " |   o   \n\t"
           << " |  /+\\ \n\t"
           << " |       \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    case 10:
      cout << "________\n\t"
           << " |/  |   \n\t"
           << " |   o   \n\t"
           << " |  /+\\ \n\t"
           << " |    \\ \n\t"
           << " |       \n\t"
           << "-----    \n\n";
      break;
    }

    return 0;
  }
}

/****************************************************************
carDansChaine recherche si a valeur de lettreDevinee est
contenue dans le motSaisi
****************************************************************/
int carDansChaine() {

  int cpt = 0;

  while (cpt < motSaisi.length()) {
    if (motSaisi[cpt] == lettreDevinee) {
      return 1;
    }

    cpt++;
  }

  return 0;
}

/****************************************************************
rplCarChaine remplace la valeur de lettreDevinee dans la chaine
cryptee si carDansChaine a retournee la valeur 1.
****************************************************************/
int rplCarChaine() {

  int cpt = 0;

  while (cpt < motSaisi.length()) {
    if (motSaisi[cpt] == lettreDevinee) {
      motADeviner[cpt] = lettreDevinee;
    }

    cpt++;
  }
}

/****************************************************************
testLettreDev recherche si a valeur de lettreDevinee est
contenue dans la chaine lettresEntrees. Si elle s'y trouve deja
la lettre n'est pas rajoutee.
****************************************************************/
int testLettreDev() {

  int cpt = 0;

  while (cpt < lettresEntrees.length()) {
    if (lettresEntrees[cpt] == lettreDevinee) {
      return 1;
    }

    cpt++;
  }

  return 0;
}

/****************************************************************
question demande si l'on veut continuer la partie ou non.
selon la reponse il affice ou non le tableau final.
****************************************************************/
int question() {

  reponseQuestion = '0';
  cout << "Voulez-vous recommencer? oui/non \n\t";
  cin >> reponseQuestion;

  if (reponseQuestion != "oui" && reponseQuestion != "non") {
    return 0;
  }

  if (reponseQuestion == "oui") {
    /********************************************************
    Si la partie jouee vaut 10, la parite recommence au debut
    soit, a l'endroit ou l'on rentre le nom des joueurs.
    ********************************************************/
    if (cptTS == 10) {
      numeroPartie = 0;
      cptTS = 0;
      tableauScoresL1_3_5_7 = "|";
      tableauScoresL2 = "|Num Manche";
      tableauScoresL4 = "|";
      tableauScoresL6 = "|";
      scoreJoueur1 = 0;
      scoreJoueur2 = 0;
      nomsDesJoueurs();

    } else {
      numeroPartie++;
      nbrChance = 0;
      system("clear");
      SaisieDuMot();
    }

  } else if (reponseQuestion == "non") {
    if (cptTS == 10) {
      exit(0);

    } else {
      system("clear");

      tableauScores();

      cout << "\nLes scores finaux sont:\n\t" << Joueur1 << ": " << scoreJoueur1
           << "\n\t" << Joueur2 << ": " << scoreJoueur2 << "\n\n";

      if (scoreJoueur1 < scoreJoueur2) {
        cout << Joueur2 << " a gagne!\n\n";

      } else if (scoreJoueur1 > scoreJoueur2) {
        cout << Joueur1 << " a gagne!\n\n";

      } else if (scoreJoueur1 == scoreJoueur2) {
        cout << "Egalite entre les deux joueurs!\n\n";
      }

      exit(EXIT_SUCCESS);
    }
  }
}

/****************************************************************
tableauScores affiche le tableau des scores selon la partie en
cours avec le nom des joueurs.

    Exemple d'un tableau de Scores apres
    6 manches:
|----------|-----|-----|-----|-----|-----|
|Num Manche|  1  |  2  |  3  |  5  |  6  |
|----------|-----|-----|-----|-----|-----|
|nomJoueur1|  G  |  P  |  G  |  G  |  P  |
|----------|-----|-----|-----|-----|-----|
|nomJoueur2|  P  |  G  |  P  |  P  |  G  |
|----------|-----|-----|-----|-----|-----|

****************************************************************/
void tableauScores() {

  while (cptTS <= numeroPartie) {
    if (cptTS <= 9) {
      tableauScoresL1_3_5_7 += "-----|";

      if (Joueur1G == 1) {
        tableauScoresL4 += "  G  |";
        tableauScoresL6 += "  P  |";

      } else if (Joueur2G == 1) {
        tableauScoresL4 += "  P  |";
        tableauScoresL6 += "  G  |";
      }
      // Ajout des differentes colonnes selon la partie.
      switch (cptTS) {
      case 0:
        tableauScoresL2 += "  1  |";
        break;
      case 1:
        tableauScoresL2 += "  2  |";
        break;
      case 2:
        tableauScoresL2 += "  3  |";
        break;
      case 3:
        tableauScoresL2 += "  4  |";
        break;
      case 4:
        tableauScoresL2 += "  5  |";
        break;
      case 5:
        tableauScoresL2 += "  6  |";
        break;
      case 6:
        tableauScoresL2 += "  7  |";
        break;
      case 7:
        tableauScoresL2 += "  8  |";
        break;
      case 8:
        tableauScoresL2 += "  9  |";
        break;
      case 9:
        tableauScoresL2 += " 10  |";
        break;
      }
    }

    cptTS++;
  }
  // Affichage du tableau
  cout << "Le tableau des scores est:\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL2 << "\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL4 << "\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL6 << "\n\t" << tableauScoresL1_3_5_7 << "\n\n";

  Joueur1G = 0;
  Joueur2G = 0;

  if (cptTS == 10) {
    finDePartie();
  }
}

/****************************************************************
finDePartie affiche le tableau final des scores ainsi que le nom
du gagnant.
La fonction permet egalement de recommencer la partie a zero.
****************************************************************/
void finDePartie() {

  system("clear");

  cout << "La partie est terminee!\n\t"
       << "Le tableau des scores est:\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL2 << "\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL4 << "\n\t" << tableauScoresL1_3_5_7 << "\n\t"
       << tableauScoresL6 << "\n\t" << tableauScoresL1_3_5_7 << "\n\n"
       << "\nLes scores finaux sont:\n\t" << Joueur1 << ": " << scoreJoueur1
       << "\n\t" << Joueur2 << ": " << scoreJoueur2 << "\n\n";

  if (scoreJoueur1 < scoreJoueur2) {
    cout << Joueur2 << " a gagne!\n\n";

  } else if (scoreJoueur1 > scoreJoueur2) {
    cout << Joueur1 << " a gagne!\n\n";

  } else if (scoreJoueur1 == scoreJoueur2) {
    cout << "Egalite entre les deux joueurs!\n\n";
  }

  while (question() == 0) {
    cout << "\nCe n'est pas une reponse valable!\n"
         << "Veuillez en saisir une autre.\n\n";
  }
}
