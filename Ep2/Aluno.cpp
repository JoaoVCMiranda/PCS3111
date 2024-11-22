#include "Aluno.h"

int Aluno::hora = 23;
int Aluno::minuto = 59;

Aluno::Aluno(int id, std::string nome): Usuario(id, nome){}

Aluno::~Aluno(){}

void Aluno::setHorarioFim(int hora, int minuto){
	Aluno::hora   =  hora;
	Aluno::minuto = minuto;
}

int Aluno::getHoraFim(){
	return Aluno::hora;
}

int Aluno::getMinutoFim(){
	return Aluno::minuto;
}

// ----------Métodos da classe mãe---------------- 
bool Aluno::entrar(Data* d){
	if( Aluno::HORARIO_INICIO<=d->getHora() &&
		d->getHora()<=Aluno::hora && d->getMinuto()<=Aluno::minuto){
			return true;
		}
	return false;
}
bool Aluno::sair(Data* d){
	if(d->getHora()){

	}
	return false;

}
bool Aluno::registrarEntradaManual(Data *d){
	return false;
}
bool Aluno::registrarSaidaManual(Data *d){
	return false;
}





