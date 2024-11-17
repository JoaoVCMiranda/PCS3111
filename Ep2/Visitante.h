#ifndef VISITANTE_H

#define VISITANTE_H

class Visitante{
	public:
		Visitante(int id, string nome, Data* inicio, Data* fim);
		virtual ~Visitante();
		Data* getDataInicio();
		Data* getDataFim(); 

}

#endif
