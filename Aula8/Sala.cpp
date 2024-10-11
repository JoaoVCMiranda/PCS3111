#include "Sala.h"
#include <string>
#include <iostream>

using namespace std;

Sala::Sala(string nome, int metragem){ 
    this->nome = nome;
    if(metragem<=0){
        throw invalid_argument("Metragem invalida");//Usou dimensão imaginária");
    }
    this->metragem=metragem;


}