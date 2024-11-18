#include "Usuario.h"

Usuario::Usuario(int id, std::string nome){
	this->id = id;
	this->nome = nome;
}
std::string Usuario::getNome(){
	return this->nome;
}
int Usuario::getId(){
	return this->id;
}

// Preciso ler o roteiro para saber como implementar essas funções

bool Usuario::entrar(Data* d){
	return false;
}
bool Usuario::sair(Data* d){
	return false;

}
bool Usuario::registrarEntradaManual(Data *d){
	return false;

}
bool Usuario::registrarSaidaManual(Data *d){
	return false;

}
