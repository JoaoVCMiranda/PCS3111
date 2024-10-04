#include "Quarto.h"
#include "Reserva.h"
#include "Hotel.h"
#include "PacoteDeFinalDeSemana.h"
#include <iostream>

using namespace std; 


void teste1() {
    Quarto *q1 =  new Quarto(25,3,2);
    Reserva *r1  = new Reserva(q1,2,4);
    PacoteDeFinalDeSemana *pfds = new PacoteDeFinalDeSemana(q1, 5,true);

    // Funções dadas    
    r1->imprimir();
    pfds->imprimir();
}

void teste2() {
    Quarto *q1 =  new Quarto(25,3,2);
    Reserva *r1  = new Reserva(q1,2,4);

    PacoteDeFinalDeSemana *pfds1 = new PacoteDeFinalDeSemana(q1, 5,true);
    
    r1->imprimir();
    pfds1->imprimir();

    Hotel *h = new Hotel(10);
    h->fazer(r1);
    h->fazer(pfds1);
    
    Quarto *q2 =  new Quarto(32,4,2);
    PacoteDeFinalDeSemana *pfds2 = new PacoteDeFinalDeSemana(q2, 7,true);

    h->fazer(pfds2);

    h->imprimir();
    
    delete r1;
    delete pfds1;
    delete pfds2;


    delete q1;
    delete q2;

    delete h;

}

void teste3() {
    Quarto *q1 =  new Quarto(25,3,2);

    Reserva *r1  = new Reserva(q1,2,4);
    Reserva *r2  = new Reserva(q1,5,9);
    

    Hotel *h = new Hotel(10);
    
    h->fazer(r1);
    h->fazer(r2);

    cout << h->estaDisponivel(q1, 6,8) << endl;

    
}