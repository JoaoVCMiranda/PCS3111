#include <iostream>
#include "GerenciadorDeUsuario.h"
#include "PersistenciaDeUsuario.h"
using namespace std;

int acesso(){
	int op;
	cout << "Acesso ao predio"<<endl;
	cout << "1) Entrada" << endl;
	cout << "2) Saida" << endl;
	cout << "3) Registro manual" << endl;
	cout << "4) Cadastro de usuario" << endl;
	cout << "5) Relatorio" << endl;
	cout << "6) Configuracao" << endl;
	cout << "0) Sair" << endl;
	cout << "Escolha uma opcao: ";
	cin >> op;
	return op;
}
void op1(){}
void op2(){}
void op3(){}
void op4(){}
void op5(){}
void op6(){}

void menu(){
	// ----------------Persistência  -----------------------
	PersistenciaDeUsuario p;
	// -----------------------------------------------------
	// ----------- PRIMEIRA TELA ---------------------------
	char carregarUsuarios;
	cout << "Deseja carregar usuários (s/n): ";
	cin >> carregarUsuarios;
	GerenciadorDeUsuario* g = nullptr;
	if(carregarUsuarios=='s'){
		// ---- TELA INTERMEDIÁRIA-----
		string path;
		cout << "Arquivo: ";
		g = new GerenciadorDeUsuario(p.carregar(path));

	}else if(carregarUsuarios=='n'){
		g = new GerenciadorDeUsuario();

	}// Não é preciso tratar os casos de entrada incorreta
	int op = 1;
	while(op){
		op = acesso();
		switch(op){
			// ----------- TELA OP1 -------------
			case 1:
				cout << "Op1";
			break;
			// ----------- TELA OP2 -------------
			case 2:
				cout << "Op2";
			break;
			// ----------- TELA OP3 -------------
			case 3:
				cout << "Op3";
			break;
			// ----------- TELA OP4 -------------
			case 4:
				cout << "Op4";
			break;
			// ----------- TELA OP5 -------------
			case 5:
				cout << "Op5";
			break;
			// ----------- TELA OP6 -------------
			case 6:
				cout << "Op6";
			break;
			// ----------- TELA OP0 -------------
			case 0:
			break;
			default:
				cout << "Opção invalida" << endl;
		}
	}
	char salvar;
	cout << "Deseja salvar usuarios (s/n): ";
	cin >> salvar;
	if(salvar=='s'){
		string arquivo;
		cout << "Arquivo: ";
		cin >> arquivo;
		p.salvar(arquivo,g->getUsuarios());
	}
	delete g;
}
