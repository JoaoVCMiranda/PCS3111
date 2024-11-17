#ifndef DATA_H

#define DATA_H

class Data{
	private:
		int hora, minuto,segundo, dia, mes,ano;
	public:
		Data(int hora, int minuto, int segundo, int dia, int mes, int ano);
		virtual ~Data();

		int getHora()	{return hora;};
		int getMinuto() {return minuto;};
		int getSegundo(){return segundo;};
		int getDia()	{return dia;};
		int getMes()	{return mes;};
		int getAno()	{return ano;};

		int diferenca(Data *d);
};


#endif
