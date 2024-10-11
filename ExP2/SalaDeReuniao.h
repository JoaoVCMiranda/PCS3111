#ifndef SALADEREUNIAO_H
#define SALADEREUNIAO_H

#include "Sala.h"
#include <string>
#include <iostream>

using namespace std;

class SalaDeReuniao:public Sala{
    private:
        static double m2;
    public:
        SalaDeReuniao(string nome, int metragem);
        virtual ~SalaDeReuniao();
        static void setPrecoPorMetroQuadrado(double valor){if(m2<=0){throw invalid_argument("Valor invalido");}m2 = valor;};
        static double getPrecoPorMetroQuadrado(){return m2;};
};
// Lembrar de sempre terminar a definição da classe com ;
#endif