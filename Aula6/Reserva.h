#ifndef Reserva_H
#define Reserva_H

#include "Quarto.h"

class Reserva {
private:

protected:
    int precoTotal = 0;
    bool cafe = false;
    int inicio = 0;
    int fim = 0;
    Quarto *quarto = nullptr;

public:
    Reserva(Quarto* quarto, int inicio, int fim);
    virtual ~Reserva();
    
    Quarto* getQuarto();
    int getInicio();
    int getFim();
    double calcularPreco();
    bool temCafe();
    void imprimir();
};

#endif  // Reserva_H
