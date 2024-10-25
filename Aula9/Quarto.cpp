// Faca os includes necessarios
#include "Quarto.h"
#include <iostream>
#include <stdexcept>
#include "SemEspaco.h"

using namespace std;

Quarto::Quarto(int numeroDoQuarto, int numeroDeCamas) {
	if(numeroDoQuarto<=0){
		throw new invalid_argument("Numero do quarto invalido");
	}
	if(numeroDeCamas<=0){
		throw new invalid_argument("Numero de camas invalido");

	}
}

Quarto::~Quarto() {}

double Quarto::precoBase = 100.0;

double Quarto::getPrecoDiaria(int numeroDePessoas) {
  if(numeroDePessoas>2*numeroDeCamas){
	throw new SemEspaco("Numero de pessoas muito alto");
  }
  return precoBase * numeroDePessoas;
}

void Quarto::imprimir() {
  cout << "Quarto " << numeroDoQuarto << " - " << numeroDeCamas << " camas"
       << endl;
}
