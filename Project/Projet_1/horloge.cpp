#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

string NOM_MOIS[12] = {"janvier",   "fevrier", "mars",     "avril",
                       "mai",       "juin",    "juillet",  "aout",
                       "septembre", "octobre", "novembre", "decembre"};
string NOM_JOUR[7] = {"lundi",    "mardi",  "mercredi", "jeudi",
                      "vendredi", "samedi", "dimanche"};
const int JOUR_DANS_MOIS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool bisextile(int annee);
void Alarme(int secondeAlarme, int minuteAlarme, int heureAlarme,
            int jourAlarme, int moisAlarme, int anneeAlarme);

int main() {

  int seconde, minute, heure, nombre_jour, numero_jour_semaine, mois, annee,
      choix;

  cout << "Entrez la date et l heure d initialisation de l horloge" << endl;
  cout << "L annee en cours :" << endl;
  cin >> annee;

  do {
    cout << "Le chiffre du mois en cours :" << endl;
    cin >> mois;
  } while (mois < 1 || mois > 12);

  do {
    cout << "Le chiffre du jour en cours :" << endl;
    cin >> nombre_jour;
  } while (
      nombre_jour > (JOUR_DANS_MOIS[mois - 1]) ||
      (mois == 2 && bisextile(annee) && nombre_jour > (jour_dans_mois[1] + 1)));

  cout << "L heure du jour au format hh :" << endl;
  cin >> heure;
  cout << "Les minutes du jour au format mm :" << endl;
  cin >> minute;
  cout << "Les secondes du jour au format ss :" << endl;
  cin >> seconde;
  cout << "Mise en place d une alarme (si oui:tapez 1 sinon tapez 2)" << endl;
  cin >> choix;

  if (choix == 1) {
    Alarme(secondeAlarme, minuteAlarme, heureAlarme, jourAlarme, moisAlarme,
           anneeAlarme);
  }

  if (numero_jour_semaine == 0) {
    nom_jour_semaine = "lundi";
  }

  if (numero_jour_semaine == 1) {
    nom_jour_semaine = "mardi";
  }

  if (numero_jour_semaine == 2) {
    nom_jour_semaine = "mercredi";
  }

  if (numero_jour_semaine == 3) {
    nom_jour_semaine = "jeudi";
  }

  if (numero_jour_semaine == 4) {
    nom_jour_semaine = "vendredi";
  }

  if (numero_jour_semaine == 5) {
    nom_jour_semaine = "samedi";
  }

  if (numero_jour_semaine == 6) {
    nom_jour_semaine = "dimanche";
  }

  {
    if (seconde > 59) {
      minute = minute++;
      seconde = 0;
    }

    if (minute > 59) {
      heure = heure++;
      minute = 0;
    }

    if (heure > 23) {
      heure = 0;
      nombre_jour = nombre_jour++;
      numero_jour_semaine = numero_jour_semaine++;
    }

    if (nombre_jour > 31) {
      mois = mois++;
      nombre_jour = 1;
    }

    if (numero_jour_semaine > 6) {
      numero_jour_semaine = 0;
    }

    if (mois > 11) {
      mois = 0;
      annee = annee++;
    }

    seconde++;
  }

  cout << nomJours[numero_jour_semaine] << " " << nombre_jour << " "
       << nomMois[mois] << " " << annee << " " << heure << "h:" << minute
       << "mm:" << seconde << "s" << endl;
}

bool bisextile(int annee) {

  if (annee % 400 == 0) {
    return (true);

  } else {
    if (annee % 4 == 0 && annee % 100 != 0) {
      return (true);

    } else {
      return (false);
    }
  }
}

void Alarme(int secondeAlarme, int minuteAlarme, int heureAlarme,
            int jourAlarme, int moisAlarme, int anneeAlarme) {

  int secondeAlarme, minuteAlarme, heureAlarme, jourAlarme, moisAlarme,
      anneAlarme;

  cout << "Saisissez l annee de l alarme :" << endl;
  cin >> anneeAlarme;
  cout << "Saisissez le mois de l alarme :" << endl;
  cin >> moisAlarme;
  cout << "Saisissez le jour de declenchement de l alarme (format jj) :"
       << endl;
  cin >> jourAlarme;
  cout << "Saisissez l' heure de l alarme (format hh) :" << endl;
  cin >> heureAlarme;
  cout << "Saisissez les minutes de l alarme (format mm) :" << endl;
  cin >> minuteAlarme;
  cout << "Saisissez les secondes de l alarme (format ss) :" << endl;
  cin >> secondeAlarme;

  if (seconde == secondeAlarme &&minute == minuteAlarme &&heure ==
          heureAlarme &&nombre_jour == jourAlarme &&mois ==
          moisAlarme &&annee = anneAlarme) {
    cout << "\7"
         << "\7"
         << "Alarme finie, c'est l heure" << endl;
  }

  cout << "Désirez-vous une nouvelle alarme. Si oui tapez 1 sinon tapez 2"
       << endl;
}
