#ifndef RESERVA_H
#define RESERVA_H

#include <stdexcept>
#include <string>

using namespace std;

class SemEspaco: public logic_error{
private:

public:
  SemEspaco(string msg);
  //~SemEspaco();
  // Como definir o destrutor?
};

#endif // RESERVA_H
