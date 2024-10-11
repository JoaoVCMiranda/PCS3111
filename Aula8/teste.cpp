#include "Apartamento.h"

void teste1() {
  Apartamento* ap1 = new Apartamento(33,55);
  Apartamento* ap2 = new Apartamento(43,70);
  Apartamento* ap3 = new Apartamento(53,120);
  ap1->imprimir();
  ap2->imprimir();
  ap3->imprimir();

  delete ap1;
  delete ap2;
  delete ap3;
}

void teste2() {
  
  Apartamento* ap1 = new Apartamento(21,60);
  Apartamento* ap2 = new Apartamento(31,85);
  Apartamento* ap3 = new Apartamento(41,105);

  Apartamento::setPrecoBase(150.0);
  
  ap1->imprimir();
  ap2->imprimir();
  ap3->imprimir();

  Apartamento::setPrecoBase(300.0);
  
  ap1->imprimir();
  ap2->imprimir();
  ap3->imprimir();

  delete ap1;
  delete ap2;
  delete ap3;
}