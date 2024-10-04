#ifndef ARCONDICIONADO_H
#define ARCONDICIONADO_H

#include "Carga.h"

class ArCondicionado : public Carga {
public:
  ArCondicionado (double potencia, double setPoint);
  ~ArCondicionado();

  double getSetPoint();
  void setSetPoint (double setPoint);
private:
  double setPoint;
};

#endif // ARCONDICIONADO_H
