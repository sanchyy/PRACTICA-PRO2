#ifndef TRETS_HH
#define TRETS_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <set>
#endif // NO_DIAGRAM

#include "Parell_cromosomes.hh"

class Tret {
private:
  Parell_cromosomes carac_tret;
  set <int> individus_amb_aquest_tret;

public:

  Tret();

  ~Tret();

  Parell_cromosomes& consulta_cromosoma();

  void afegir_tret(int id, Parell_cromosomes& pc);

  void treure_tret(int id, Parell_cromosomes& pc);

};

#endif //TRETS_HH