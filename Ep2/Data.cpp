#include "Data.h"

using namespace Data;

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

Data(int hora, int minuto, int segundo, int dia, int mes, int ano){


	// Verificar se tem um jeito melhor de fazer isso
	if ((0<=hora && hora<=23) && 
	    (0<=segundo && segundo<=59) &&
	    (0<=minuto && minuto<=59) &&
	    (0<=dia && dia<=31) &&
	    ){
		this->hora =  hora;
	}else{
	
	}

	if(){
	this->minuto=minuto;
	}else{
	
	}
	
	if(){
	this->segundo=segundo;
	}else{

	}
	
	if(){
	this->dia=dia;
	}else{

	}
	
	if(){
	this->mes=mes;
	}else{

	}
	
	if(){
	this->ano=ano;
	}else{}
}

int diferenca(Data *d){
	
	return	
}
