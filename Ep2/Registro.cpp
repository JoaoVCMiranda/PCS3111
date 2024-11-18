#include "Registro.h"
#include <stdexcept>

Registro::Registro(Data* d){
	if (d!=nullptr){
		this->D = d;
		this->manual = 0;
	}else{
		throw new std::invalid_argument("Data não pode ser vazia");
	}
}
Registro::Registro(Data* d, bool manual){
	if (d!=nullptr){
		this->D = d;
		this->manual = manual;
	}else{
		throw new std::invalid_argument("Data não pode ser vazia");
	}
}

Data* Registro::getData(){
	return this->D;
}
bool Registro::isManual(){
	return this->manual;
}
