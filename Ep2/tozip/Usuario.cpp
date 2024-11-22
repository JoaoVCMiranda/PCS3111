#include "Usuario.h"

Usuario::Usuario(int id, std::string nome){
	this->id = id;
	this->nome = nome;
}
// Não esquecer de fazer o destrutor
Usuario::~Usuario(){
}
std::string Usuario::getNome(){
	return this->nome;
}
int Usuario::getId(){
	return this->id;
}

