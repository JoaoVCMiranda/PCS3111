// Devo fazer uma classe de herança da função reserva

#include "PacoteDeFinalDeSemana.h" 
#include <iostream>



// Constructors
PacoteDeFinalDeSemana::PacoteDeFinalDeSemana(Quarto *quarto, int inicio, bool temCafe): Reserva(quarto, inicio,inicio+2){
    this->cafe = temCafe;
    int diaria = (temCafe) ? quarto->getPrecoDiaria() +20 : quarto->getPrecoDiaria();
    this->precoTotal = diaria*2;
}  
// Destructor
PacoteDeFinalDeSemana::~PacoteDeFinalDeSemana(){
        
}

