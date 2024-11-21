#include <iostream>
#include "Data.h"
//#include "Registro.h"
#include <vector>
#include "PersistenciaDeUsuario.h"
#include "Funcionario.h"
#include "Visitante.h"
#include "Aluno.h"
#include "Usuario.h"


void variable(){
	Data d1(10,0,0,21,10,2024);
	Data* d2 = new Data(9,0,0,21,10,2024);
	std::cout<< d1.diferenca(d2)<< "\n";
}
void pointer(){
	Data* d1 = new Data(10,0,0,21,10,2024);
	Data* d2 = new Data(10,0,0,22,10,2024);
	std::cout<< d1->diferenca(d2)<<"\n";
}
void forEachVectorElement(){
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for(int i : v){
		std::cout << i << std::endl;
	}
}
void forEachVectorPointer(){
	std::vector<int>* v = new std::vector<int>;
	v->push_back(4);
	v->push_back(3);
	v->push_back(2);
	v->push_back(1);

	for (int i : *v){
		std::cout << i <<std::endl; 
	}
	
	//std::cout << v->size()<< std::endl;
}
void vectorOfPointers(){
	std::vector<int*>* v = new std::vector<int*>;

	int* a = new int(40); 
	v->push_back(a);

	int* b = new int(30); 
	v->push_back(b);

	int* c = new int(20); 
	v->push_back(c);

	int* d = new int(10); 
	v->push_back(d);

	std::cout << (*v)[0] <<std::endl; 
	//std::cout << i <<std::endl; 
	//std::cout << i <<std::endl; 
	//std::cout << i <<std::endl; 
}

int main(){
	std::cout<<"Hello World++"<<"\n";
	//variable();
	//pointer();
	//vectorOfPointers();	
	return 0;
}

