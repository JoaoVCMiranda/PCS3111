#ifndef LAMPADADELED_H
#define LAMPADADELED_H

#include "Lampada.h"

class LampadaDeLed : public Lampada {
public:
	LampadaDeLed(double potencia, int vidaUtil);
	virtual ~LampadaDeLed();

	int getVidaUtil();
private:
	int vidaUtil;
};

#endif // LAMPADADELED_H
