#ifndef DATA_H
#define DATA_H

#include <ctime>

class Data{
	private:
		// talvez tenha um método alternativo
		// que é a estrutura que eu queria criar
		// porém já está pronto e implementado nativamente no cpp
		int hora, minuto,segundo, dia, mes,ano;
		std::tm * D = nullptr;

	public:
		Data(int hora, int minuto, int segundo, int dia, int mes, int ano);
		virtual ~Data();

		int getHora();
		int getMinuto();
		int getSegundo();
		int getDia();
		int getMes();
		int getAno();

		int diferenca(Data *d);
};


#endif
