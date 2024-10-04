#include "Carga.h"
#include <iostream>

using namespace std;

Carga::Carga (double potencia) : potencia (potencia) {
}

Carga::~Carga() {
  cout << "Carga destruida" << endl;
}

void Carga::ligar() {
  ligada = true;
}

void Carga::desligar() {
  ligada = false;
}

bool Carga::isLigada() {
  return ligada;
}

double Carga::getPotencia() {
  return potencia;
}
