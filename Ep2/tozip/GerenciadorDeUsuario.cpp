#include "GerenciadorDeUsuario.h"
#include <stdexcept>

GerenciadorDeUsuario::GerenciadorDeUsuario(){
	// tenho que inicializar um ponteiro para vetor
	// Primeiro instanciar o vetor, depois gerar o ponteiro p ele.
	this->usuarios = new std::vector<Usuario*>;
}
GerenciadorDeUsuario::GerenciadorDeUsuario(std::vector<Usuario*> * usuarios){
	this->usuarios = usuarios;
}
GerenciadorDeUsuario::~GerenciadorDeUsuario(){
	for(Usuario* u : *this->usuarios){
		delete u;
	}
	delete this->usuarios;
}

void GerenciadorDeUsuario::adicionar(Usuario* u){
	// entender como fazer o push back de pointers
	for(Usuario* user : *this->usuarios){
		if(user->getId()==u->getId()){
			throw new std::invalid_argument("Não se pode adicionar usuário com id duplicado");
		}
	}
	this->usuarios->push_back(u);
}
Usuario* GerenciadorDeUsuario::getUsuario(int id){
	for(Usuario* u: *this->usuarios){
		if(u->getId()==id){
			return u;
		}	
	}
	return nullptr;

}
std::vector<Usuario*>* GerenciadorDeUsuario::getUsuarios(){
	return this->usuarios;
}


