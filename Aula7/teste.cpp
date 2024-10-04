#include "QuartoDeLuxo.h"
#include "Hotel.h"
#include <iostream>
using namespace std;

void teste1() {
    QuartoDeLuxo* ql1 = new QuartoDeLuxo(18, true, false);
    QuartoDeLuxo* ql2 = new QuartoDeLuxo(19, true, true);
    QuartoDeLuxo* ql3 = new QuartoDeLuxo(20, false, true);

    ql1->imprimir();
    ql2->imprimir();
    ql3->imprimir();
}

void teste2() {
    Hotel* h = new Hotel(2,2);
    int q = 0;
    h->getQuartosDeLuxo(q);
    cout << q << endl;

    Quarto* q1 = new Quarto(20, 4,2);
    h->adicionarQuarto(q1);
    
    h->getQuartosDeLuxo(q);
    cout << q << endl;

    QuartoDeLuxo* ql = new QuartoDeLuxo(21,true, false);
    h->adicionarQuarto(ql);

    h->getQuartosDeLuxo(q);
    cout << q << endl;

    delete h;


}