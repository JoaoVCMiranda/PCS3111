#include "Visitante.h"
#include <stdexcept>

Visitante::Visitante(int id, std::string nome, Data* inicio, Data* fim): Usuario(id, nome){
	if(inicio==nullptr || fim==nullptr){
		throw new std::invalid_argument("Data não pode ser vazia");
	}
	if(fim->diferenca(inicio) <= 0 ){
		throw new std::logic_error("Data de fim não pode ser menor que data de início");
	} 	
	this->entrada = inicio;
	this->saida = fim;
}
Data* Visitante::getDataInicio(){
	return this->entrada;
}
Data* Visitante::getDataFim(){
	return this->saida;
}
Visitante::~Visitante(){}


// ----------Métodos da classe mãe---------------- 
// Casos de não entrada/saida
//  Horário anterior ao último
// Tipo do horário igual ao último

bool Visitante::entrar(Data* d){
	if( this->entrada->getHora()<=d->getHora() && this->entrada->getMinuto()<= d->getMinuto() &&
		d->getHora()<=this->saida->getHora() && d->getMinuto() <= this->saida->getMinuto()){
			return true;
	}
	return false;
}
bool Visitante::sair(Data* d){
	if( this->entrada->getHora()<=d->getHora() && this->entrada->getMinuto()<= d->getMinuto() &&
		d->getHora()<=this->saida->getHora() && d->getMinuto() <= this->saida->getMinuto()){
			return true;
	}
	return false;
}
bool Visitante::registrarEntradaManual(Data *d){
	return false;

}
bool Visitante::registrarSaidaManual(Data *d){
	return false;
}
