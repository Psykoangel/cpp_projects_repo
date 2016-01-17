#ifndef SAVE_H
#define SAVE_H

class Save {
public:
  static int Save(double sociability, double actionTendency, double temper,
                  double mood, double energy, double hunger);
  static int Save::Read(double &sociability, double &actionTendency,
                        double &temper, double &mood, double &energy,
                        double &hunger) protected : private:
};

#endif // SAVE_H
