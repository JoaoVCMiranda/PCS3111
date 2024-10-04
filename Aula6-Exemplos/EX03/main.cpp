#include <iostream>

#include "Carga.h"
#include "Lampada.h"
#include "LampadaDeLed.h"
#include "ArCondicionado.h"

using namespace std;

int main() {
  float b = 10.5;
  int a = (int) b;

  cout << b << " : " << a << endl;

  Carga* c = new ArCondicionado(10000, 20);

  ArCondicionado* s1 = static_cast<ArCondicionado*>(c);
  cout << s1->getSetPoint() << endl;

  LampadaDeLed* s2 = static_cast<LampadaDeLed*>(c);
  cout << s2->getVidaUtil() << endl;

  return 0;
}
