#include "Aluno.h"
#include <stdexcept>

int Aluno::hora = 23;
int Aluno::minuto = 0;

Aluno::Aluno(int id, std::string nome): Usuario(id, nome){}

Aluno::~Aluno(){}

void Aluno::setHorarioFim(int hora, int minuto){
	if(hora>23 || minuto>59){
		throw new std::logic_error("Horário inválido");
	}
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
		d->getHora()<=Aluno::hora && d->getMinuto()<=Aluno::minuto
		){
			return true;
	}
	return false;
}
bool Aluno::sair(Data* d){
	return true;

}
bool Aluno::registrarEntradaManual(Data *d){
	return false;
}
bool Aluno::registrarSaidaManual(Data *d){
	return true;
}





