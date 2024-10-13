#ifndef CATRACA_H
#define CATRACA_H

#define "GerenciadorDeUsuario.h"

class Catraca{
public:
	Catraca(GerenciadorDeUsuario* g);
	virtual ~Catraca();
	bool entrar(int id, Data* d);
	bool sair(int id, Data* d); 
}

#endif
