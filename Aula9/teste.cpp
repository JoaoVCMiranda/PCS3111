#include "Quarto.h"
#include <stdexcept>
#include <iostream>
#include "SemEspaco.h"

using namespace std;

void teste1() {
	try{
		Quarto *q1 = new Quarto(0,-1);
	}catch(invalid_argument *e){
		cout << e->what() << endl;
		delete e;
	}	
	try{
		Quarto *q1 = new Quarto(2,-1);
	}catch(invalid_argument *e){
		cout << e->what() << endl;
		delete e;
	}
}

void teste2() {
	Quarto *q1 = new Quarto(1,2);
	q1->imprimir();
	try{
	}catch(SemEspaco *e){
		cout << "Erro:";
		cout<< e->what() << endl;
		delete e;
	}
	delete q1;
}

void teste3() {
  // Altere conforme o enunciado
}
