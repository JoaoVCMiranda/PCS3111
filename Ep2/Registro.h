#ifndef REGISTRO_H

#define REGISTRO_H
#include "Data.h"

class Registro{
	private:
		Data* D = nullptr;
		bool manual;
	public:
		Registro(Data* d);
		Registro(Data* d, bool manual);
		// Para que seja uma classe abstrata
		virtual ~Registro() = 0;
		Data* getData();
		bool isManual(); 
};

#endif
