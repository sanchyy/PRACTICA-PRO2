#ifndef CJT_TRET_HH
#define CJT_TRET_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <map>
#endif // NO_DIAGRAM

using namespace std;
#include "Tret.hh"

class Cjt_Tret {
private:
  
  map <string,Tret> Trets;

public:

  Cjt_Tret();
  
  ~Cjt_Tret();

  void afegir_tret(int id, const string &t);

  void treure_tret(int id, const string &t);

  void consulta_tret(const string& t);

  bool distribucio_tret(string& tret);

};

#endif //CJT_TRET_HH