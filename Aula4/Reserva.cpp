#include <string>
#include <iostream>

#include "Reserva.h"

using namespace std;

void Reserva::setQuarto(int numeroDoQuarto){
	this-> quarto = numeroDoQuarto;
}
void Reserva::setInicio(int inicio){
	this-> inicio = inicio;
}

void Reserva::setFim(int fim){
	this-> fim = fim;
}

int Reserva::getInicio(){
	return this->inicio;
}

int Reserva::getFim(){
	return this->fim;
}

int Reserva::getQuarto(){
	return this->quarto;
}

double Reserva::getPreco()
{
    return 100*(fim - inicio);
}
void Reserva::imprimir()
{
    cout << "Reserva ("<< inicio << "-" << fim << "): Quarto " << quarto << " - " << getPreco()<< " reais" << endl;
}
bool Reserva::estaDisponivel(int inicio, int fim){
	if(this->inicio<=inicio && this->fim>fim)return false;
	return true;
}