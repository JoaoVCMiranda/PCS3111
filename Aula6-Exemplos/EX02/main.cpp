#include <iostream>

#include "Carga.h"
#include "Lampada.h"
#include "LampadaDeLed.h"
#include "ArCondicionado.h"

using namespace std;

void imprimeCarga(Carga* c) {
  cout << c->getPotencia() << "W" << endl;
}

int main() {
  Carga* c1 = new Lampada(200);
  imprimeCarga(c1);

  Carga* c2 = new ArCondicionado(10000, 20);
  //cout << c2->getSetPoint() << endl;

  return 0;
}
