// Faça os includes necessários
#include "QuartoDeLuxo.h"
#include <iostream>

using namespace std;

QuartoDeLuxo::QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada) : Quarto(numeroDoQuarto, 2, 1) {
  this->kingSize = kingSize;
  this->sacada = sacada;
}

QuartoDeLuxo::~QuartoDeLuxo() {

}

double QuartoDeLuxo::getPrecoDiaria() {
  double prBase = 300;
  if(kingSize)prBase+=75;
  if(sacada)prBase+=150;
  return prBase;

}

double QuartoDeLuxo::getPrecoDiaria(double desconto) {
  double prBase = 300;
  if(kingSize)prBase+=75;
  if(sacada)prBase+=150;
  return prBase*(1-desconto);
}

void QuartoDeLuxo::imprimir() {
  cout << "Quarto de Luxo "<< this->getNumeroDoQuarto() << ":  Diaria custa " << this->getPrecoDiaria() << " reais"<< endl;
}