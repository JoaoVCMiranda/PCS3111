#include "Quarto.h"

#include <iostream>

using namespace std;

Quarto::Quarto(int numeroDoQuarto, int numeroDePessoas, int numeroDeCamas)
{
    this->numeroDeCamas = numeroDeCamas;
    this->numeroDePessoas = numeroDePessoas;
    this->numeroDoQuarto = numeroDoQuarto;
}

int Quarto::getNumeroDeCamas()
{
    return numeroDeCamas;
}

int Quarto::getNumeroDePessoas()
{
    return numeroDePessoas;
}

int Quarto::getNumeroDoQuarto()
{
    return numeroDoQuarto;
}

double Quarto::getPrecoDiaria()
{
    if (numeroDePessoas == 2)
    {
        // Promoção instantanea
        return (double)100 * 1.5;
    }
    else
    {
        // Valor normal
        return 100 * numeroDePessoas;
    }
}

void Quarto::imprimir()
{
    cout << "Quarto " << numeroDoQuarto << ": " << numeroDePessoas << " pessoas, "
         << numeroDeCamas << " camas - Diaria custa " << this->getPrecoDiaria() << endl;
}