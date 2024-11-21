#include <iostream>
#include <vector>
#include "GerenciadorDeUsuario.h"
#include "PersistenciaDeUsuario.h"
#include "Catraca.h"
#include "Funcionario.h"
#include "Usuario.h"
#include "Aluno.h"
#include "Visitante.h"

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
void op1(Catraca& c0, Catraca& c1){
	int c;
	int id, hora, min, seg, dia, mes, ano;
	cout << "Catraca: ";
	cin >>c;
	cout << "Id: ";
	cin >>id;
	cout << "Hora: ";
	cin >>hora;
	cout << "Minuto: ";
	cin >>min;
	cout << "Segundo: ";
	cin >>seg;
	cout << "Dia: ";
	cin >>dia;
	cout << "Mes: ";
	cin >>mes;
	cout << "Ano: ";
	cin >> ano;
	
	bool entrou;
	if(c){
		// Catraca 1		
		entrou = c1.entrar(id, new Data(hora, min, seg, dia, mes, ano));
	}else{
		// Catraca 0
		entrou = c0.entrar(id, new Data(hora, min, seg, dia, mes, ano));
	}
	if(entrou){
		cout << "[Entrada] Catraca " << c << " abriu: id "<< id << endl;
	}else{
		cout << "[Entrada] Catraca " << c << " travada" << endl;
	}
}
void op2(Catraca& c0, Catraca& c1){
	int c;
	int id, hora, min, seg, dia, mes, ano;
	cout << "Catraca: ";
	cin >>c;
	// Não gosto de ficar repetinndo códigos assim, mas acho que é o jeito
	cout << "Id: ";
	cin >>id;
	cout << "Hora: ";
	cin >>hora;
	cout << "Minuto: ";
	cin >>min;
	cout << "Segundo: ";
	cin >>seg;
	cout << "Dia: ";
	cin >>dia;
	cout << "Mes: ";
	cin >>mes;
	cout << "Ano: ";
	cin >> ano;
	
	bool saiu;
	if(c){
		// Catraca 1		
		saiu = c1.sair(id, new Data(hora, min, seg, dia, mes, ano));
	}else{
		// Catraca 0
		saiu = c0.sair(id, new Data(hora, min, seg, dia, mes, ano));
	}
	if(saiu){
		cout << "[Saida] Catraca " << c << " abriu: id "<< id << endl;
	}else{
		cout << "[Saida] Catraca " << c << " travada" << endl;
	}
}
void op3(GerenciadorDeUsuario* g){
	// essa operação deve ser válida apenas para funcionários
	char t;
	int id, hora, min, seg, dia, mes, ano;
	cout << "Entrada (e) ou Saida (s)? ";
	cin >> t;
	cout << "Id: ";
	cin >>id;
	cout << "Hora: ";
	cin >>hora;
	cout << "Minuto: ";
	cin >>min;
	cout << "Segundo: ";
	cin >>seg;
	cout << "Dia: ";
	cin >>dia;
	cout << "Mes: ";
	cin >>mes;
	cout << "Ano: ";
	cin >> ano;
	
	Funcionario* f = nullptr;

	/* Ainda não entendi como funciona a entrada e saída manual
	for(Usuario* u: *g->getUsuarios()){
		if(id==u->getId()){
			f = (Funcionario) u;
		}
	}

	if(t=='e'){

	}else if(t=='s'){
	}*/

}
void op4(GerenciadorDeUsuario* g){
// Cadastro de usuário
	char t;
	cout << "Tipo (v, a ou f): ";
	cin >> t;
	if(t=='v'){
		int id;
		string nome;
		cout << "Id: ";
		cin >> id;
		cout << "Nome: ";
		cin >> nome;
		int horai, mini, segi, diai, mesi, anoi;
		int horaf, minf, segf, diaf, mesf, anof;
		cout << "Data de inicio" << endl;
		cout << "Hora: ";
		cin >>horai;
		cout << "Minuto: ";
		cin >>mini;
		cout << "Segundo: ";
		cin >>segi;
		cout << "Dia: ";
		cin >>diai;
		cout << "Mes: ";
		cin >>mesi;
		cout << "Ano: ";
		cin >> anoi;
		cout << "Data de fim" << endl;
		cout << "Hora: ";
		cin >>horaf;
		cout << "Minuto: ";
		cin >>minf;
		cout << "Segundo: ";
		cin >>segf;
		cout << "Dia: ";
		cin >>diaf;
		cout << "Mes: ";
		cin >>mesf;
		cout << "Ano: ";
		cin >> anof;
		Data* di = new Data(horai,mini,segi,diai,mesi, anoi);
		Data* df = new Data(horaf,minf,segf,diaf,mesf, anof);
		
		Visitante* v = new Visitante(id, nome, di, df); 
	}if(t=='a'||t=='f'){
		int id;
		string nome;
		cout << "Id: ";
		cin >> id;
		cout << "Nome: ";
		cin >> nome;
		Usuario* u = nullptr;
		if(t=='f'){
			u = new Funcionario(id, nome);
		}else if(t=='a'){
			u = new Aluno(id, nome);
		}
		g->adicionar(u);
	}
	cout << "Usuario cadastrado com sucesso";
}
void op5(GerenciadorDeUsuario*g ){
	int mes, ano;
	cout << "Mes: ";
	cin >>mes;
	cout << "Ano: ";
	cin >>ano;
	cout << "Relatorio de horas trabalhadas";
	for(Usuario* u: *g->getUsuarios()){
		Funcionario* f = nullptr;
		//f = (Funcionario) u;
		//Como fazer o type cast do funci?
		if(f!=nullptr){
			string nome = f->getNome();
			int horas = f->getHorasTrabalhadas(mes, ano);
			cout << nome << ": " << horas << endl;
		}
	}
}
void op6(){
	// Verificar se os intervalos de entrada permitida já estão bem definidos
	cout << "Horario de fim da janela dos Alunos"<<endl;
	int hora, min;
	cout << "Hora: ";
	cin >> hora;
	cout << "Minuto: ";
	cin >> min;
	Aluno::setHorarioFim(hora, min);
}

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
	// --------------- Catracas      -----------------------
	Catraca c0(g);
	Catraca c1(g);
	// -----------------------------------------------------
	
	// ------------- MENU DE OPÇÕES ------------------------
	int op = 1;
	while(op){
		op = acesso();
		switch(op){
			// ----------- TELA OP1 -------------
			case 1:
				op1(c0,c1);
			break;
			// ----------- TELA OP2 -------------
			case 2:
				op2(c0,c1);
			break;
			// ----------- TELA OP3 -------------
			case 3:
				op3(g);
			break;
			// ----------- TELA OP4 -------------
			case 4:
				op4(g);
			break;
			// ----------- TELA OP5 -------------
			case 5:
				op5(g);
			break;
			// ----------- TELA OP6 -------------
			case 6:
				op6();
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
