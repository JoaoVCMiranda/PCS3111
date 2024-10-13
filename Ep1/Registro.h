#ifndef REGISTRO_H
#define REGISTRO_H

class Registro{
public:
	Registro(Data* d, bool entrada, bool manual);
	virtual ~Registro();
	Data* getData();
	bool isEntrada();
	bool isManual(); 
}
#endif
