#ifndef VISITANTE_H
#define VISITANTE_H

#include "Usuario.h"
#include "Data.h"
#include <string>

class Visitante:public Usuario{
	private:
		Data* entrada = nullptr;
		Data* saida = nullptr;
	public:
		Visitante(int id, std::string nome, Data* inicio, Data* fim);
		virtual ~Visitante();
		Data* getDataInicio();
		Data* getDataFim(); 
};

#endif
