#ifndef QUARTO_DE_LUXO_H
#define QUARTO_DE_LUXO_H

// Para fazer o import de uma classe local
#include "Quarto.h"

// Forma de fazer herança em c++
class QuartoDeLuxo : public Quarto{
  private:
    bool kingSize = false;
    bool sacada = false;
  public:
    QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada);
    ~QuartoDeLuxo();

    double getPrecoDiaria();
    double getPrecoDiaria(double desconto);

    void imprimir();

};

#endif
