#include "PersistenciaDeQuarto.h"
#include <fstream>
#include <stdexcept>

using namespace std;

PersistenciaDeQuarto::PersistenciaDeQuarto(string arquivo) {
    this->f = arquivo;
}

PersistenciaDeQuarto::~PersistenciaDeQuarto() {
}

void PersistenciaDeQuarto::inserir(Quarto *q) {
    ofstream fs;
    fs.open(this->f, ios_base::app);
    fs << q->getNumero()<< endl << q->getNumeroDeCamas() << endl;
    fs.close();
}

Quarto **PersistenciaDeQuarto::obter(int &quantidade) {
    // Alocação dinâmica
    Quarto *q  =new Quarto(1,1);
    Quarto **Q = new Quarto * [10];
    ifstream fs;
    quantidade= 0;
    // ios_base::in é opcional
    fs.open(this->f, ios_base::in);
    
    if(fs.fail()){
        fs.close();
        throw new invalid_argument("Erro de leitura");
    }
    while(fs){
        int nQ, nC;
        Quarto* qatual = nullptr;
        
        try{
            fs >> nQ >> nC;
            qatual = new Quarto(nQ, nC);
        }catch(exception *e){    
            cout << e->what() <<endl;
            delete e;
        }
        
        if(qatual != nullptr){
            Q[quantidade] = qatual;
            quantidade+=1;
        }
    }
    if(!fs.eof()){
        fs.close();
        throw new logic_error("Arquivo com formatacao inesperada");
    }
    fs.close();
    
    if(quantidade==0){
        return nullptr;
    }
    return Q;
}