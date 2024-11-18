#include <iostream>
#include "Data.h"
//#include "Registro.h"
#include <vector>

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
	
}

int main(){
	std::cout<<"Hello World++"<<"\n";
	//variable();
	//pointer();

}

