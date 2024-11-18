#include "Funcionario.h"

Funcionario::Funcionario(int id, std::string nome):Usuario(id, nome){
	// Devo criar um ponteiro para um vetor( de ponteiros)
	this->registros = new std::vector<Registro*>;
}

Funcionario::Funcionario(int id, std::string nome, std::vector<Registro*>* registros):Usuario(id, nome){
	this->registros = registros;
}

Funcionario::~Funcionario(){
	/* Deletar os registros antes... Primeiro preciso conseguir fazer o loop
	 * em todos os elementos do ponteiro para o vetor de ponteiros
	for(const Registro* r : this->registros){
		delete r;
	}*/

	delete this->registros;
}
int Funcionario::getHorasTrabalhadas(int mes, int ano){
	// Como fazer um for com um vetor de ponteiros ?
	// Para adicionar um registro será necessário fazer um type cast.
	// Verificar todos os registros cujo o mês e o ano estão especificados
	return -1;
}
std::vector<Registro*>* Funcionario::getRegistros(){
	return this->registros;
}



