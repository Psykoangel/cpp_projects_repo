#include <iostream>
#include <stdlib.h>

using namespace std;

class date {

private:
  char heure[3];
  char date[9];
  char format[11];

public:
  int chgheure(char *);
  int chgdate(char *);
  char createformat(void);
  int confheure();
};

int main(void) {

  cout << "\nCe programme configure l'heure pour votre systeme unix\n";
  cout << "Veuillez donner l'heure souhaite au format heures:minutes\nExemple: "
          "13:25\n";
  cout << "\n-> ";

  char *heures = new char[4];
  cin >> heures;

  date date;
  date.chgheure(heures);
  delete heures;

  cout << "Veuillez donner la date souhaite au format "
          "jours/mois/annes\nExemple: 07/12/2004\n";
  cout << "\n-> ";

  char *date1 = new char[9];
  cin >> date1;
  date.chgdate(date1);
  delete date1;

  date.createformat();
  date.confheure();
  cout << "\nfin\n";

  return 0;
}

int date::chgdate(char buf[9]) {

  char *date2 = new char[6];
  memset(date2, 0, sizeof(date2));

  int i;

  for (i = 0; buf[i] != '/'; i++) {
    date2[i] = buf[i];
  }

  int a = i;
  i++;

  for (; buf[i] != '/'; (i++ && a++)) {
    date2[a] = buf[i];
  }

  i++;

  for (; i != 12; (i++ && a++)) {
    date2[a] = buf[i];
  }

  i = 0;

  while (i != 9) {
    date[i] = date2[i];
    i++;
  }

  delete date2;

  return 0;
}

int date::chgheure(char ch[4]) {

  char *heures2 = new char[3];
  memset(heures2, 0, sizeof(heures2));

  int i;

  for (i = 0; ch[i] != ':'; i++) {
    heures2[i] = ch[i];
  }

  int a = i;
  i++;

  for (; a != 4; (i++ && a++)) {
    heures2[a] = ch[i];
  }

  i = 0;

  while (i != 4) {
    heure[i] = heures2[i];
    i++;
  }

  delete heures2;

  return 0;
}

char date::createformat() {

  sprintf(format, "%c%c%c%c%c%c%c%c%c%c%c%c", date[2], date[3], date[0],
          date[1], heure[0], heure[1], heure[2], heure[3], date[4], date[5],
          date[6], date[7]);
}

int date::confheure() {

  char *envoi = new char[sizeof(format) + 5];

  sprintf(envoi, "date %s", format);

  system(envoi);

  delete envoi;

  return 0;
}
