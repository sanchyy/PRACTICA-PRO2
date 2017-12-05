#ifndef PARELL_CROMOSOMES_HH
#define PARELL_CROMOSOMES_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <vector>
#endif //NO_DIAGRAM

using namespace std;

class Parell_cromosomes{
private:

  static int m;

  vector< pair<char,char> > Parell_cromosoma; 

public:

  //Constructora

    Parell_cromosomes();

  /** @brief
      \pre el p.i. és un Parell_cromosoma.
      \post p.i. és buit.
  */
  ~Parell_cromosomes();

  static void defineix_mida(int m); 

  /** @brief
      \pre el p.i. és un Parell_cromosoma no buit
      \post s'ha escrit el Parell_cromosoma pel canal estandard de sortida
  */
  void escriure();

  /** @brief
      \pre el p.i. és un Parell_cromosoma buit
      \post s'ha llegit el Parell_cromosoma pel canal estandard d'entrada
  */
  void llegir();

  void update_add(Parell_cromosomes& c2);


  char consulta_iessim(int i, bool b);
};

#endif //PARELL_CROMOSOMA_HH
