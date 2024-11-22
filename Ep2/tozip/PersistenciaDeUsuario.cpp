#include "PersistenciaDeUsuario.h"
#include <stdexcept>
#include <fstream>
#include "Funcionario.h"
#include "Visitante.h"
#include "Aluno.h"
#include "Entrada.h"
#include "Saida.h"
#include "Data.h"

PersistenciaDeUsuario::PersistenciaDeUsuario(){
// Não tem comportamente definido
}
PersistenciaDeUsuario::~PersistenciaDeUsuario(){
// Não tem comportamento definido
}

std::vector<Usuario*>* PersistenciaDeUsuario::carregar(std::string arquivo){
	// Será preciso gerar um usuário
	// tenho 3 tipos de usuários...	
	std::ifstream fs;
	fs.open(arquivo, std::ios_base::in);
	std::vector<Usuario*>* ans = new std::vector<Usuario*>;
	while(fs){
		char t;
		int id;
		std::string nome;
		fs >> t >> id >> nome;
		if(t=='F'){
			int n;
			fs >> n;
			Funcionario* f = new Funcionario(id, nome);
			for(int i=0;i<n;i++){
				char rT;
				int hora, minuto,segundo,dia, mes, ano;
				bool manuel; 
				fs >> rT >> hora >> minuto >> segundo >> dia >>  mes >> ano >> manuel;
				Data* d = new Data(hora, minuto, segundo, dia, mes, ano);
				if(!manuel){			
					if(rT=='E'){
						f->entrar(d);
					}else if(rT=='S'){
						f->sair(d);
					}
				}else{
					if(rT=='E'){
						f->registrarEntradaManual(d);
					}else if(rT=='S'){
						f->registrarSaidaManual(d);
					}					
				}
			}
			ans->push_back(f);
		}
		if(t=='A'){
			Aluno* a = new Aluno(id,nome);
			ans->push_back(a);
		}
		if(t=='V'){
			int hora[2], minuto[2],segundo[2], dia[2], mes[2], ano[2];

			fs >> hora[0] >> minuto[0] >> segundo[0] >>dia[0] >> mes[0] >> ano[0];
			fs >> hora[1] >> minuto[1] >> segundo[1] >>dia[1] >> mes[1] >> ano[1];
			
			Data* ini = new Data(hora[0], minuto[0],segundo[0], dia[0], mes[0], ano[0]);
			Data* fim = new Data(hora[1], minuto[1],segundo[1], dia[1], mes[1], ano[1]);
			
			Visitante* v = new Visitante(id, nome,ini, fim);
			ans->push_back(v);
		}

	}
	if(!fs.eof()){
        fs.close();
        throw new std::logic_error("Arquivo com formatacao inesperada");
    }
    fs.close();
	return ans;
}

void PersistenciaDeUsuario::salvar(std::string arquivo, std::vector<Usuario*>* v){
	//Será definido a seguir
	std::ofstream fs;
	fs.open(arquivo, std::ios_base::app);
	// Para cada usuário tem um tipo de escrita
	for(Usuario* u : * v){
		Funcionario* f  = dynamic_cast<Funcionario*>(u);
		Visitante  * vt = dynamic_cast<Visitante*>(u) ;
		Aluno      * a  = dynamic_cast<Aluno*>(u);
		// Se for funcionário
		if(f!=nullptr){
			fs << f->getId() << " " << f->getNome() << std::endl;
			std::vector<Registro*> * rs = f->getRegistros();
			fs << rs->size();

			for (Registro* r : * rs){

				Entrada* e = dynamic_cast<Entrada*>(r);
				
				
				if(e!=nullptr){
					fs << "E " << std::endl;
				}else{
					fs << "S " << std::endl;
				}
				Data * d = r->getData();

				fs << d->getHora() << " ";
				fs << d->getMinuto() << " ";
				fs << d->getSegundo() << " ";
				fs << d->getDia() << " ";
				fs << d->getMes() << " ";
				fs << d->getAno() << " ";
				// verificar se a saída é 0/1 ou false/true 
				fs << r->isManual() << std::endl; 
			}
		// Se for visitante
		}else if(vt!=nullptr){
			fs << "V " << vt->getId() << " " << vt->getNome();
			Data* d1 = vt->getDataInicio();
			Data* d2 = vt->getDataFim();
			fs << d1->getHora() << " ";
			fs << d1->getMinuto() << " ";
			fs << d1->getSegundo() << " ";
			fs << d1->getDia() << " ";
			fs << d1->getMes() << " ";
			fs << d1->getAno() << " ";
			
			fs << d2->getHora() << " ";
			fs << d2->getMinuto() << " ";
			fs << d2->getSegundo() << " ";
			fs << d2->getDia() << " ";
			fs << d2->getMes() << " ";
			fs << d2->getAno() << std::endl;

		// Se for aluno
		}else if(a!=nullptr){
			fs << "A " << a->getId() << " " << a->getNome();
		}
	}	
}

