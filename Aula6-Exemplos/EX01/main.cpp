#include <iostream>

#include "Carga.h"
#include "Lampada.h"
#include "LampadaDeLed.h"
#include "ArCondicionado.h"

using namespace std;

int main() {
  Carga *c = new Carga(1000);
  Lampada *lampada = new Lampada(100);
  LampadaDeLed *led = new LampadaDeLed(16, 10000);
  ArCondicionado *a = new ArCondicionado(1000, 20);

  cout << "Carga: " << c->getPotencia() << endl;
  cout << "Lampada: " << lampada->getPotencia() << endl;
  cout << "LampadaDeLed: " << led->getPotencia() << endl;
  cout << "ArCondicionado: " << a->getPotencia() << endl;

  cout << "Removendo carga" << endl;
  delete c;

  cout << endl << "Removendo lampada" << endl;
  delete lampada;

  cout << endl << "Removendo led" << endl;
  delete led;

  cout << endl << "Removendo ar" << endl;
  delete a;
  return 0;
}
