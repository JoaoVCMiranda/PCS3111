#ifndef SALA_H
#define SALA_H

#include<string>
using namespace std;

class Sala {
    private:
        string nome;
        int metragem;
    public:
        Sala(string nome, int metragem);
        virtual ~Sala();
        string getNome();
        int getMetragem();
        void imprimir();
        // deve ser abstrato
        // Para que a classe também seja...
        virtual double getPreco();
};

#endif