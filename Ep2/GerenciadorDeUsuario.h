#ifndef GERENCIADOR_DE_USUARIO_H
#define GERENCIADOR_DE_USUARIO_H

#include <vector>
#include "Usuario.h"

class GerenciadorDeUsuario{
	public:
		GerenciadorDeUsuario();
		GerenciadorDeUsuario(std::vector<Usuario*>* usuarios);
		virtual ~GerenciadorDeUsuario();
		void adicionar(Usuario* u);
		Usuario* getUsuario(int id);
		std::vector<Usuario*>* getUsuarios(); 

};

#endif
