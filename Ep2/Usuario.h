#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "Data.h"

class Usuario{
	protected:
		int id;
		std::string nome;
	public:
		Usuario(int id, std::string nome);
		virtual ~Usuario();
		std::string getNome();
		int getId();
		bool entrar(Data *d);
		bool sair(Data *d);
		bool registrarEntradaManual(Data *d);
		bool registrarSaidaManual(Data* d);
};

#endif
