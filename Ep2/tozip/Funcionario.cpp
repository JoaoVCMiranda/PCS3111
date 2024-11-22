#include "Funcionario.h"
#include "Entrada.h"
#include "Saida.h"
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

// ----------Métodos da classe mãe---------------- 
// A data que está sendo inserida não pode ser menor que a última
// O tipo do último registro deve ser diferente do atual
bool Funcionario::entrar(Data* d){
	// ------------ SE NÃO FOR VAZIO --------------
	if(d==nullptr){
		return false;
		//throw new std::invalid_argument("Data não pode ser vazia");
	}
	if(this->registros->size()>0){
	// ------------ NEM DO MESMO TIPO -------------
		Entrada* e = dynamic_cast<Entrada*>(this->registros->back());
		if(e!=nullptr){
			return false;
			//throw new std::logic_error("Registro não pode ser do mesmo tipo que o último");
		}
	// ------------ OU ANTERIOR A ÚLTIMA DATA ----
		if(d->diferenca(this->registros->back()->getData()) <= 0){
			return false;
			//throw new std::logic_error("Data de registro não pode ser anterior a última");
		}
	}
	Entrada* e= new Entrada(d);
	this->registros->push_back(e);
	return true;
}
bool Funcionario::sair(Data* d){
	// ------------ SE NÃO FOR VAZIO --------------
	if(d==nullptr){
		return false;
		//throw new std::invalid_argument("Data não pode ser vazia");
	}
	if(this->registros->size()>0){
	// ------------ NEM DO MESMO TIPO -------------
		Saida* s = dynamic_cast<Saida*>(this->registros->back());
		if(s!=nullptr){
			return false;
			//throw new std::logic_error("Registro não pode ser do mesmo tipo que o último");
		}
	// ------------ OU ANTERIOR A ÚLTIMA DATA ----
		if(d->diferenca(this->registros->back()->getData()) <= 0){
			return false;
			//throw new std::logic_error("Data de registro não pode ser anterior a última");
		}
	}
	Saida* s= new Saida(d);
	this->registros->push_back(s);
	return true;

}
bool Funcionario::registrarEntradaManual(Data *d){
	// ------------ SE NÃO FOR VAZIO --------------
	if(d==nullptr){
		return false;
		//throw new std::invalid_argument("Data não pode ser vazia");
	}
	if(this->registros->size()>0){
	// ------------ NEM DO MESMO TIPO -------------
		Entrada* e = dynamic_cast<Entrada*>(this->registros->back());
		if(e!=nullptr){
			return false;
			//throw new std::logic_error("Registro não pode ser do mesmo tipo que o último");
		}
	// ------------ OU ANTERIOR A ÚLTIMA DATA ----
		if(d->diferenca(this->registros->back()->getData()) <= 0){
			return false;
			//throw new std::logic_error("Data de registro não pode ser anterior a última");
		}
	}
	Entrada* e= new Entrada(d,true);
	this->registros->push_back(e);
	return true;
}
bool Funcionario::registrarSaidaManual(Data *d){
	// ------------ SE NÃO FOR VAZIO --------------
	if(d==nullptr){
		return false;
		//throw new std::invalid_argument("Data não pode ser vazia");
	}
	if(this->registros->size()>0){
	// ------------ NEM DO MESMO TIPO -------------
		Saida* s = dynamic_cast<Saida*>(this->registros->back());
		if(s!=nullptr){
			return false;
			//throw new std::logic_error("Registro não pode ser do mesmo tipo que o último");
		}
	// ------------ OU ANTERIOR A ÚLTIMA DATA ----
		if(d->diferenca(this->registros->back()->getData()) <= 0){
			return false;
			//throw new std::logic_error("Data de registro não pode ser anterior a última");
		}
	}
	Saida* s= new Saida(d,true);
	this->registros->push_back(s);
	return true;
}



