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
	 */
	for(Registro* r : *this->registros){
		delete r;
	}

	delete this->registros;
}
int Funcionario::getHorasTrabalhadas(int mes, int ano){
	// Como fazer um for com um vetor de ponteiros ?
	// Para adicionar um registro será necessário fazer um type cast.
	// Verificar todos os registros cujo o mês e o ano estão especificados
	int ans = 0;
	for (int i =0;i<(this->registros->size()/2)*2;i+=2){
		Data* d1 = (*this->registros)[i]->getData();
		Data* d2 = (*this->registros)[i+1]->getData();
		if (d1->getMes() == mes && d1->getAno() == ano){
			/*	
			int hora 	= (*this->registros)[i]->getHora(); 
			int minuto	= (*this->registros)[i]->getMinuto(); 
			int segundo 	= (*this->registros)[i]->getSegundo(); 
			int dia 	= (*this->registros)[i]->getDia(); 
			int mes 	= (*this->registros)[i]->getMes(); 
			int ano		= (*this->registros)[i]->getAno(); 
				
			Data* d= new Data(hora, minuto, segundo, dia, mes, ano);
			*/
			
			ans += d2->diferenca(d1);
		}
	}
	return (ans/3600);
}
std::vector<Registro*>* Funcionario::getRegistros(){
	return this->registros;
}



