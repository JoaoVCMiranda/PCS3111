#include "Catraca.h"
#include "Usuario.h"

Catraca::Catraca(GerenciadorDeUsuario *g){
	this->g = g;
}

bool Catraca::entrar(int id, Data* d){
	std::vector<Usuario> *users = this->g->getUsuarios();
	for(auto &u : users){
		;
		if(id==u->getId()){
			return u->entrar();	
		}
	}
	return false;
}

