#ifndef GERENCIADORDEUSUARIO_H
#define GERENCIADORDEUSUARIO_H

#define "Usuario.h"

class GerenciadorDeUsuario{
public:
	GerenciadorDeUsuario(int maximo);
	virtual ~GerenciadorDeUsuario();
	bool adicionar(Usuario* u);
	Usuario* getUsuario(int id);
	Usuario** getUsuarios();
	int getQuantidade();
}

#endif
