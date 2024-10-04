#ifndef Hotel_H
#define Hotel_H

#include "Reserva.h"
#define MAXIMO_DE_RESERVAS 10

class Hotel {
// Atributos Private
private:
	int quantidade=0;
	Reserva *reservas[MAXIMO_DE_RESERVAS];
	
// Metodos public
public:
	bool adicionar(Reserva* reserva);
	bool estaDisponivel(int quarto, int inicio, int fim);
	Reserva* getReserva(int i);
	void imprimir();
};
#endif