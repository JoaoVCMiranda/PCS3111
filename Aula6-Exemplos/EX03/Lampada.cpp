#include "Lampada.h"
#include <iostream>

using namespace std;

Lampada::Lampada (double potencia) : Carga (potencia) {
}

Lampada::~Lampada() {
  cout << "Lampada destruida" << endl;
}
