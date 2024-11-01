#include "Quarto.h"
#include "PersistenciaDeQuarto.h"

void teste1() {
  Quarto *q1= new Quarto(1,4);
  Quarto *q2= new Quarto(2,2);
  Quarto *q3= new Quarto(3,1);

  PersistenciaDeQuarto *pdq = new PersistenciaDeQuarto("teste1.txt"); 

  Quarto ** Q  = new Quarto * [10];

  Q[0]=q1;
  Q[1]=q2; 
  Q[2]=q3;

  Q[0]->imprimir();
  Q[1]->imprimir(); 
  Q[2]->imprimir();


  pdq->inserir(q1);
  pdq->inserir(q2); 
  pdq->inserir(q3);


  delete q1;
  delete q2;
  delete q3;
  delete pdq;
}

void teste2() {


  int quant;
  string arquivo = "teste2.txt";
  PersistenciaDeQuarto *pdq = new PersistenciaDeQuarto(arquivo);
  Quarto **Q = nullptr;
  try{
    Quarto **Q = pdq->obter(quant);
  }catch(exception *e){
    //debug
    cout<< e->what() << endl;
    delete e;
  }

  for(int i=0;i<quant;i++) if(Q[i] != nullptr) Q[i];

  for(int i =0;i<quant;i++) delete Q[i];

  delete pdq;

}

void teste3(){
  int quant = 5;
  string arquivo = "teste3.txt";
  PersistenciaDeQuarto *pdq = new PersistenciaDeQuarto(arquivo);
  Quarto **Q = nullptr;
  try{
    Quarto **Q = pdq->obter(quant);
    if(Q == nullptr) cout << "ok" <<endl;
    cout << quant << endl;


  }catch(exception *e){
    //debug
    cout<< e->what() << endl;
    delete e;
  }
}