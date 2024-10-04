#ifndef CARGA_H
#define CARGA_H

class Carga {
protected:
  bool ligada = false;
  double potencia;
public:
  Carga (double potencia);
  ~Carga();

  void ligar();
  void desligar();
  bool isLigada();
  double getPotencia();
};

#endif // CARGA_H
