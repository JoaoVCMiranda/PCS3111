#include "GerenciadorDeUsuario.h"

GerenciadorDeUsuario::GerenciadorDeUsuario(){
	// tenho que inicializar um ponteiro para vetor
	// Primeiro instanciar o vetor, depois gerar o ponteiro p ele.
	this->usuarios = new std::vector<Usuario*>;
}
GerenciadorDeUsuario::GerenciadorDeUsuario(std::vector<Usuario*> * usuarios){
	this->usuarios = usuarios;
}
GerenciadorDeUsuario::~GerenciadorDeUsuario(){
	delete this->usuarios;
}

void GerenciadorDeUsuario::adicionar(Usuario* u){
	// entender como fazer o push back de pointers
	this->usuarios.push_back(u);
}
/*
Usuario* GerenciadorDeUsuario::getUsuario(int id){
	for(auto &u: this->usuarios){
		if(u->getId()==id){
			return u;
		}	
	}
	return nullptr;

}
*/
Usuario* GerenciadorDeUsuario::getUsuario(int id){return nullptr;}

std::vector<Usuario*>* GerenciadorDeUsuario::getUsuarios(){
	return this->usuarios;
}


