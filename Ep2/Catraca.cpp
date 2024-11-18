#include "Catraca.h"
#include "Usuario.h"
#include <stdexcept>

Catraca::Catraca(GerenciadorDeUsuario *g){
	// esse gerenciador não pode ser vazio
	if(g!=nullptr){
		this->g = g;
	}else{
		throw new std::logic_error("Gerenciador não pode ser vazio");
	}
}

bool Catraca::entrar(int id, Data* d){
	Usuario* u = this->g->getUsuario(id);
	if(u!=nullptr){
		return u->entrar(d);	
	}
	return false;
}
bool Catraca::sair(int id, Data* d){
	Usuario* u = this->g->getUsuario(id);
	if(u!=nullptr){
		return u->sair(d);	
	}
	return false;
}

