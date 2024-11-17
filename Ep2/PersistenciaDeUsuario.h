#ifndef PERSISTENCIA_DE_USUARIO_H

#define PERSISTENCIA_DE_USUARIO_H

class PersistenciaDeUsuario{
	public:
		PersistenciaDeUsuario();
		virtual ~PersistenciaDeUsuario();
		vector<Usuario*>* carregar(string arquivo);
		void salvar(string arquivo, vector<Usuario*>* v); 
}

#endif
