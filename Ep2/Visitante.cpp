#include "Visitante.h"
#include <stdexcept>

Visitante::Visitante(int id, std::string nome, Data* inicio, Data* fim): Usuario(id, nome){
	if(inicio!=nullptr && fim!=nullptr){
		this->entrada = inicio;
		this->saida = fim;
	}else{
		throw new std::invalid_argument("Data não pode ser vazia");
	}
}
Data* Visitante::getDataInicio(){
	return this->entrada;
}
Data* Visitante::getDataFim(){
	return this->saida;
}
