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




