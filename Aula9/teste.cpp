#include "Quarto.h"
#include <stdexcept>
#include <iostream>
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
  // Altere conforme o enunciado
}

void teste3() {
  // Altere conforme o enunciado
}
