#include <iostream>

using namespace std;

class Quarto {
public:
    int numeroDoQuarto = 0;
    int numeroDePessoas = 0;
    int numeroDeCamas = 0;
    double getPrecoDiaria();
    void imprimir();
};

double Quarto::getPrecoDiaria(){
    if(numeroDePessoas==2) return (double) 150.0;
    return (double) numeroDePessoas*100.0;
}

void Quarto::imprimir(){
    cout << "Quarto " << numeroDoQuarto <<": "<<numeroDePessoas<<" pessoas, "<< numeroDeCamas << " camas - Diaria custa " << getPrecoDiaria() << "\n";
}

class Reserva {
public:
    Quarto *quarto1 = nullptr;
    Quarto *quarto2 = nullptr;
    int inicio = 0;
    int fim = 0;
    bool adicionarQuarto(Quarto *q);
    double calcularPreco();
    void imprimir();
};

bool   Reserva::adicionarQuarto(Quarto *q){
    if(quarto1 == nullptr) {
        quarto1 = q;
        return true;
    }
    if(quarto2 == nullptr && q!=quarto1) {
        quarto2 = q;
        return true;
    }
    return false;
    

}
double Reserva::calcularPreco(){
    if(quarto1 == nullptr && quarto2 == nullptr) return 0;
    int n = fim - inicio;
    double preco = 0;
    if (quarto1 != nullptr) preco += n*quarto1->getPrecoDiaria();    
    if (quarto2 != nullptr) preco += n*quarto2->getPrecoDiaria(); 
    return preco;
}
void   Reserva::imprimir(){
    //cout << "83110 W0r1d" << "\n";
    cout << "Reserva:" << endl;
    if(quarto1!=nullptr) quarto1->imprimir();
    if(quarto2!=nullptr) quarto2->imprimir();
    cout << "Preco total: " << calcularPreco();
}



void teste2() {
    Quarto *q1 = new Quarto;
    q1->numeroDeCamas = 2;
    q1->numeroDePessoas = 3;
    q1->numeroDoQuarto =31;
    q1->imprimir();

    Quarto *q2 = new Quarto;
    q2->numeroDeCamas = 1;
    q2->numeroDePessoas = 2;
    q2->numeroDoQuarto =32;
    q2->imprimir();

    Reserva *reserv = new Reserva;
    reserv->fim = 13;
    reserv->inicio = 2;
    reserv->adicionarQuarto(q1);
    reserv->adicionarQuarto(q2);
    reserv->imprimir();
}

void teste1() {
    Quarto *q1 = new Quarto;
    q1->numeroDeCamas = 2;
    q1->numeroDePessoas = 3;
    q1->numeroDoQuarto =31;
    q1->imprimir();

    Quarto *q2 = new Quarto;
    q2->numeroDeCamas = 1;
    q2->numeroDePessoas = 2;
    q2->numeroDoQuarto =32;
    q2->imprimir();

}
