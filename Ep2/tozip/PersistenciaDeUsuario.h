#ifndef PERSISTENCIA_DE_USUARIO_H
#define PERSISTENCIA_DE_USUARIO_H

#include <string>
#include <vector>
#include "Usuario.h"

class PersistenciaDeUsuario{
	public:
		PersistenciaDeUsuario();
		virtual ~PersistenciaDeUsuario();
		std::vector<Usuario*>* carregar(std::string arquivo);
		void salvar(std::string arquivo, std::vector<Usuario*>* v); 
};

#endif
