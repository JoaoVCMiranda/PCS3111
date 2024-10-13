#ifndef USUARIO_H
#define USUARIO_H

#define "Registro.h"

class Usuario{
public:
	Usuario(int id, string nome, int maximo);
	virtual ~Usuario();
	string getNome();
	int getId();
	bool entrar(Data *d);
	bool sair(Data *d);
	bool registrarEntradaManual(Data *d);
	bool registrarSaidaManual(Data* d);
	int getHorasTrabalhadas(int mes, int ano);
	Registro** getRegistros();
	int getQuantidade(); 
}

#endif

