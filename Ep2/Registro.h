#ifndef REGISTRO_H

#define REGISTRO_H

class Registro{
	public:
		Registro(Data* d);
		Registro(Data* d, bool manual);
		virtual ~Registro() = 0;
		Data* getData();
		bool isManual(); 
};

#endif
