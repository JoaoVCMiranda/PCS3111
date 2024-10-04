#include "ArCondicionado.h"
#include <iostream>

using namespace std;

ArCondicionado::ArCondicionado (double potencia,
                                double setPoint) : Carga (potencia),
                                setPoint(setPoint) {
}

ArCondicionado::~ArCondicionado() {
  cout << "ArCondicionado destruido" << endl;
}

void ArCondicionado::setSetPoint (double setPoint) {
  if (ligada) {
    this->setPoint = setPoint;
  }
}

double ArCondicionado::getSetPoint () {
  return this->setPoint;
}
