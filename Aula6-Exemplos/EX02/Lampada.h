#ifndef LAMPADA_H
#define LAMPADA_H

#include "Carga.h"

class Lampada: public Carga {
public:
  Lampada (double potencia);
  ~Lampada();
};

#endif // LAMPADA_H
