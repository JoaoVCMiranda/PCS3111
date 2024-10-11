// Faça os includes necessários
#include "Apartamento.h"
#include <iostream>
using namespace std;

Apartamento::Apartamento(int numero, double area) : Acomodacao(numero){
  this->area = area;
}

Apartamento::~Apartamento() {

}

double Apartamento::getArea() {
  return area;
}

double Apartamento::getPrecoBase(){
  return precoBase;
}

void Apartamento::setPrecoBase(double preco){
  precoBase = preco;
}

double Apartamento::getPrecoDiaria(){
  return precoBase + 1.5*area;
}

void Apartamento::imprimir(){
  cout << "Apartamento " << getNumero() << ":"<< getArea()<< " metros quadrados - diaria custa "<< getPrecoDiaria()<< " reais" <<""<<endl; 
}

double Apartamento::precoBase = 0.0;

