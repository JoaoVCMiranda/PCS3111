#ifndef ACOMODACAO_H
#define ACOMODACAO_H

// Faça as modificações necessárias

class Acomodacao{
private:
  int numero;
public:
  Acomodacao(int numero);
  virtual ~Acomodacao();

  int getNumero();
  // Pulo do gato
  virtual double getPrecoDiaria() = 0 ;
  virtual void imprimir() = 0 ;
};
#endif