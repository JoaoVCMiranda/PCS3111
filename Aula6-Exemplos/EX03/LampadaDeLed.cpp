#include "LampadaDeLed.h"
#include <iostream>

using namespace std;

LampadaDeLed::LampadaDeLed (double potencia, int vidaUtil) :
														Lampada (potencia), vidaUtil (vidaUtil) {
}

LampadaDeLed::~LampadaDeLed() {
  cout << "LampadaDeLed destruida" << endl;
}

int LampadaDeLed::getVidaUtil() {
	return vidaUtil;
}

