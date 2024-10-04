#include <iostream>
#include <string>

#include "Reserva.h"
#include "Hotel.h"

using namespace std;

void teste1() {
    Reserva *r = new Reserva;
	r->setQuarto(31);
	r->setInicio(1);
	r->setFim(6);
	r->imprimir();
}

void teste2() {
	Reserva *r1 = new Reserva;
	r1->setQuarto(22);
	r1->setInicio(1);
	r1->setFim(8);
	Reserva *r2 = new Reserva;
	r2->setQuarto(25);
	r2->setInicio(5);
	r2->setFim(9);
	
	Hotel *h = new Hotel();
	h->adicionar(r1);
	h->adicionar(r2);
	h->imprimir();
}

