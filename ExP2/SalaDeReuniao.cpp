#include "SalaDeReuniao.h"
#include <string>
#include <iostream>

using namespace std;
// Contrutor
SalaDeReuniao::SalaDeReuniao(string nome, int metragem):Sala(nome, metragem){
    setPrecoPorMetroQuadrado(10.00);

}


SalaDeReuniao::~SalaDeReuniao(){

}



