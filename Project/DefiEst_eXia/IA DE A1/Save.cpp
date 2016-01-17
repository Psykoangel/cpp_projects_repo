#include "Save.h"

int Save::Write(double sociability, double actionTendency, double temper,
                double mood, double energy, double hunger) {
  ofstream file("local.ini");

  if (file) {
    file << double sociability << " " << double actionTendency << " "
         << double temper << " ";
    file << double mood << " " << double energy << " " << double hunger;

    return EXIT_SUCCESS;
  } else {
    cout << "Erreur : Impossible d'ouvrir le fichier pour la sauvegarde"
         << endl;
    return EXIT_FAILURE;
  }
}

int Save::Read(double &sociability, double &actionTendency, double &temper,
               double &mood, double &energy, double &hunger) {
  ofstream file("local.ini");

  if (file) {
    file >> sociability;
    file >> actionTendency;
    file >> temper;

    file >> mood;
    file >> energy;
    file >> hunger;

    return EXIT_SUCCESS;
  } else {
    cout << "Erreur : Impossible d'ouvrir le fichier pour le chargement de la "
            "sauvegarde"
         << endl;
    return EXIT_FAILURE;
  }
}

// Bot.h
void save();
void load();

// Bot.cpp
void Bot::save() {
  Save::Write(sociability, actionTendency, temper, mood, energy, hunger);
}

void Bot::load() {
  Save::Read(sociability, actionTendency, temper, mood, energy, hunger);
}
