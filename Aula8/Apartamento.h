#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Acomodacao.h"

class Apartamento:public Acomodacao{
private:
  int numero;
  double area;
public:
  Apartamento(int numero, double area);
  ~Apartamento();

  // Lembrar-se de nao instanciar os metodos da heranca
  //int getNumero();

  double getArea();
  double getPrecoDiaria();
  void imprimir();
};
#endif