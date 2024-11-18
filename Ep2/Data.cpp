#include "Data.h"
#include <stdexcept>


/*
Data(int hora, int minuto, int segundo, int dia, int mes, int ano)
	:hora(hora), 
	 minuto(minuto),
	 segundo(segundo),
	 dia(dia),
	 mes(mes),
	 ano(ano)
{}//Definição implícita dos atributos internos
  //Usar definição clássica para fazer os throws necessários
*/

/*
Data::Data(int hora, int minuto, int segundo, int dia, int mes, int ano){


	// Verificar se tem um jeito melhor de fazer isso
	if ((0<=hora && hora<=23) && 
	    (0<=minuto && minuto<=59) &&
	    (0<=segundo && segundo<=59) &&
	    (0<=dia && dia<=31) &&
	    (1<=mes && mes<=12)
	   ){
		this->hora =  hora;
		this->minuto=minuto;
		this->segundo=segundo;
		this->dia=dia;
		this->mes=mes;
		this->ano=ano;
	}else{
		throw new std::logic_error("Data inválida");
	}
}
*/

Data::Data(int hora, int minuto, int segundo, int dia, int mes, int ano){
	this->D = new std::tm;
	this->D->tm_hour 	= hora;
	this->D->tm_min 	= minuto;
	this->D->tm_sec 	= segundo;
	this->D->tm_isdst 	= 0;//não é horário de verão
	this->D->tm_mday 	= dia;
	this->D->tm_mon 	= mes - 1;//indexado no zero
	this->D->tm_year 	= ano - 1900; //indexado em 1900
	
}
Data::~Data(){
	delete this->D;
}



int Data::getHora(){
	return this->D->tm_hour;
}
int Data::getMinuto(){
	return this->D->tm_min;
}
int Data::getSegundo(){
	return this->D->tm_sec;
}
int Data::getDia(){
	return this->D->tm_mday;
}
int Data::getMes(){
	return this->D->tm_mon;
}
int Data::getAno(){
	return this->D->tm_year;
}
/*
int Data::diferenca(Data *d){
	int dAnos 	= this->ano 	- d->getAno();
	int dMeses 	= this->mes 	- d->getMes();
	int dDias 	= this->dia 	- d->getDia();
	int dHoras 	= this->hora 	- d->getHora();
	int dMinutos 	= this->minuto	- d->getMinuto();
	int dSegundos 	= this->segundo - d->getSegundo();
	
	return (dAnos*12+dMeses)*30;
}
*/
int Data::diferenca(Data *d){
	// fazer o mktime e os demais processos	
	//---
	std::tm *D2 = new std::tm;
	D2->tm_hour = d->getHora();
	D2->tm_min = d->getMinuto();
	D2->tm_sec = d->getSegundo();
	D2->tm_isdst = 0;
	D2->tm_mday = d->getDia();
	D2->tm_mon = d->getMes();
	D2->tm_year = d->getAno();
	// Lembrar de que não é um ponteiro
	std::time_t t2 = std::mktime(D2);
	std::time_t t1 = std::mktime(this->D);

	// Verificar se a ordem está correta
	return (int) std::difftime(t1, t2);

}




















