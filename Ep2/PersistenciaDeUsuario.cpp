#include "PersistenciaDeUsuario.h"
#include <stdexcept>
#include <fstream>
#include "Funcionario.h"
#include "Visitante.h"
#include "Aluno.h"

PersistenciaDeUsuario::PersistenciaDeUsuario(){
// Não tem comportamente definido
}
PersistenciaDeUsuario::~PersistenciaDeUsuario(){
// Não tem comportamento definido
}
std::vector<Usuario*>* PersistenciaDeUsuario::carregar(std::string arquivo){
	return nullptr;
	// Será preciso gerar um usuário
	// tenho 3 tipos de usuários...
	
	
}

void PersistenciaDeUsuario::salvar(std::string arquivo, std::vector<Usuario*>* v){}
/*
void PersistenciaDeUsuario::salvar(std::string arquivo, std::vector<Usuario*>* v){
	//Será definido a seguir
	std::ofstream fs;
	fs.open(arquivo, std::ios_base::app);
	// Para cada usuário tem um tipo de escrita
	for(Usuario* u : * v){
	// Será preciso fazer o type cast de cada um ?	
		Funcionario* f  = (Funcionario) u ;
		Visitante  * vt = (Visitante)   u ;
		Aluno      * a  = (Aluno)       u ;
		// Se for funcionário
		if(f!=nullptr){
			std::cout << "Funcionário"<< std::endl;
			fs << f->getId() << " " << f->getNome() << std::endl;
			std::vector<Registro*> * rs = f->getRegistros();
			fs << rs-size();
			bool tipo = true;
			for (Registro* r : * rs){
				// Verificar se essa é uma gambiarra
				if(tipo){
					fs << "E " << std::endl;
				}else{
					fs << "S " << std::endl;
				}
				tipo = !tipo;
				Data * d = r->getData();


				fs << d->getHora() << " ";
				fs << d->getMinuto() << " ";
				fs << d->getSegundo() << " ";
				fs << d->getDia() << " ";
				fs << d->getMes() << " ";
				fs << d->getAno() << " ";
				// verificar se a saída é 0/1 ou false/true 
				fs << isManual() << std::endl; 
			}
		// Se for visitante
		}else if(vt!=nullptr){
			std::cout << "Visitante"<< std::endl;
		// Se for aluno
		}else if(a!=nullptr){
			std::cout << "Aluno"<< std::endl;		

		}
	}	
}*/
