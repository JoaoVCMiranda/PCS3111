#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Acomodacao.h"

class Apartamento:public Acomodacao {
private:
  int numero;
  double area;
  static double precoBase; 
public:
  Apartamento(int numero, double area);
  ~Apartamento();

  // Lembrar-se de nao instanciar os metodos da heranca
  //int getNumero();
  
  double getArea();
  double getPrecoDiaria();
  void imprimir();
  static double getPrecoBase();
  static void setPrecoBase(double preco);
};
#endif