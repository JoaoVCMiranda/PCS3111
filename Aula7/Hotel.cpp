#include "Hotel.h"
#include "QuartoDeLuxo.h"
#include <iostream>

Hotel::Hotel(int maximoQuartos, int maximoReservas)
{
    this->maximoQuartos = maximoQuartos;
    this->maximoReservas = maximoReservas;

    quartos = new Quarto *[maximoQuartos];
    reservas = new Reserva *[maximoReservas];
}

Hotel::~Hotel(){};

Quarto **Hotel::getQuartos()
{
    return quartos;
}

Reserva **Hotel::getReservas()
{
    return reservas;
}

int Hotel::getQuantidadeReservas()
{
    return quantidadeDeReservas;
}

int Hotel::getQuantidadeQuartos()
{
    return quantidadeDeQuartos;
}

bool Hotel::fazerReserva(Reserva *r)
{
    if (quantidadeDeReservas >= maximoReservas)
    {
        return false;
    }

    reservas[quantidadeDeReservas] = r;
    quantidadeDeReservas++;
    return true;
}

bool Hotel::adicionarQuarto(Quarto *q)
{
    if (quantidadeDeQuartos >= maximoQuartos)
    {
        return false;
    }

    quartos[quantidadeDeQuartos] = q;
    quantidadeDeQuartos++;
    return true;
}

void Hotel::imprimir()
{
    cout << "=== HOTEL ===" << endl;

    cout << "Quartos:" << endl;
    for (int i = 0; i < quantidadeDeQuartos; i++)
    {
        quartos[i]->imprimir();
    }

    cout << "Reservas:" << endl;
    for (int j = 0; j < quantidadeDeReservas; j++)
    {
        reservas[j]->imprimir();
    }
}

bool Hotel::cancelarReserva(Reserva *r)
{
    for (int i = 0; i < quantidadeDeReservas; i++)
    {
        if (this->reservas[i] == r)
        {
            delete reservas[i];
            quantidadeDeReservas--;
            for (int j = i; j < quantidadeDeReservas; j++)
            {
                this->reservas[j] = this->reservas[j + 1];
            }
            return true;
        }
    }
    return false;
}

QuartoDeLuxo** Hotel::getQuartosDeLuxo(int &quantidade){
    quantidade = 0;
    // vetor dinamico poit to poit 
    QuartoDeLuxo** qL = new QuartoDeLuxo*[maximoQuartos];


    for(int i=0;
    i<this->getQuantidadeQuartos();
    i++){
    
        QuartoDeLuxo* qT= dynamic_cast<QuartoDeLuxo*>(this->getQuartos()[i]);
        
        if(qT!=NULL){            
            qL[quantidade++]=qT;
        }
    
    }
    if(quantidade==0)return nullptr;
    
    return qL;
}
