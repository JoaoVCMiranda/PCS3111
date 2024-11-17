#ifndef FUNCIONARIO_H

#define FUNCIONARIO_H

class Funcionario{
	public:
		Funcionario(int id, string nome);
		Funcionario(int id, string nome, vector<Registro*>* registros);
		virtual ~Funcionario();
		int getHorasTrabalhadas(int mes, int ano);
		vector<Registro*>* getRegistros(); 
}

#endif
