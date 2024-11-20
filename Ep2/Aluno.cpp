#include "Aluno.h"


Aluno::Aluno(int id, std::string nome): Usuario(id, nome){

}

Aluno::~Aluno(){

}
void Aluno::setHorarioFim(int hora, int minuto){
	Aluno::hora = hora;
	Aluno::minuto=minuto;
}
int Aluno::getHoraFim(){
	return Aluno::hora;
}
int Aluno::getMinutoFim(){
	return Aluno::minuto;
}
/*
bool Aluno::entrar(Data * d){
	if(
	   (d->getHora()<=Aluno::hora && d->getMinuto()<=Aluno::minuto) &&
	   (Aluno::HORARIO_INICIO<=d->getHora())	
	   ){

	}

}*/





