#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <vector>
#include "Registro.h"
#include "Usuario.h"

class Funcionario: public Usuario{
	private:
		std::vector<Registro*> *registros=nullptr;
	public:
		Funcionario(int id, std::string nome);
		Funcionario(int id, std::string nome, std::vector<Registro*>* registros);
		virtual ~Funcionario();
		int getHorasTrabalhadas(int mes, int ano);
		std::vector<Registro*>* getRegistros(); 

		bool entrar(Data *d);
		bool sair(Data *d);
		bool registrarEntradaManual(Data *d);
		bool registrarSaidaManual(Data* d);
};

#endif
