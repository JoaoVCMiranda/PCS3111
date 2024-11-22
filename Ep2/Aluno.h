#ifndef ALUNO_H

#define ALUNO_H
#include "Data.h"
#include "Registro.h"
#include "Usuario.h"
#include <string>

class Aluno: public Usuario{
	private:
		static int hora, minuto;
	public:
		static const int HORARIO_INICIO = 6;
		Aluno(int id, std::string nome);
		virtual ~Aluno();
		static void setHorarioFim(int hora, int minuto);
		static int getHoraFim();
		static int getMinutoFim();
		/* Cada aluno tem um horário de entrada que difere dos demais usuários
		using Usuario::entrar;
		bool entrar();	
		*/
		bool entrar(Data *d);
		bool sair(Data *d);
		bool registrarEntradaManual(Data *d);
		bool registrarSaidaManual(Data* d);
		
};

#endif
