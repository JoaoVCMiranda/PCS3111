#include "Hotel.h"
#include <iostream>

using namespace std;

bool Hotel::adicionar(Reserva* reserva){
	if(this->quantidade < MAXIMO_DE_RESERVAS){
		for(int i=0;i<this->quantidade;i++){
			if(reserva == this->reservas[i]){
				return false;
		}
		}
		this->reservas[this->quantidade] = reserva;
		this->quantidade++;s
		return true;
	}
	return false;
}
bool Hotel::estaDisponivel(int quarto, int inicio, int fim){
	for(int i=0;i<this->quantidade;i++){
		if(this->reservas[i]->getQuarto()==quarto){
			return this->reservas[i]->estaDisponivel(inicio, fim);
		}
	}	
	return false;
}
Reserva* Hotel::getReserva(int i){
	return this->reservas[i];
}
void Hotel::imprimir(){
    
	cout << "Hotel com " << this->quantidade << " reservas" << endl;
}

