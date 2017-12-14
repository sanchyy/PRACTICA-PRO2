#ifndef PARELL_CROMOSOMES_HH
#define PARELL_CROMOSOMES_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <vector>
#endif //NO_DIAGRAM

using namespace std;

class Parell_cromosomes{
private:

  int m;
  vector< pair<char,char> > Parell_cromosoma; 

public:

  //Constructora

  Parell_cromosomes();

  /** @brief
      \pre el p.i. és un Parell_cromosoma.
      \post p.i. és buit.
  */
  ~Parell_cromosomes();

  void defineix_mida(int mida); 

  /** @brief
      \pre el p.i. és un Parell_cromosoma no buit
      \post s'ha escrit el Parell_cromosoma pel canal estandard de sortida
  */
  void escriure();

  /** @brief
      \pre el p.i. és un Parell_cromosoma buit
      \post s'ha llegit el Parell_cromosoma pel canal estandard d'entrada
  */
  void llegir(int m);

  /** @brief
      \pre el p.i. és el parell de cromosomes que es vol modificar i c2 un Parell de cromosomes
      amb el que es vol fer la interseccio amb el p.i.
      \post el p.i. és la intersecció de p.i. i c2. c2 no ha estat modificat.
  */
  void update_add(Parell_cromosomes& c2);

  /** @brief
      \pre el p.i. és un Parell_cromosoma
      \post si b = true, es retorna el cromosoma first en posicio i, en cas contrari, el ccromosoma second que ocupa la posició i.
  */
  char consulta_iessim(int i, bool b);

};

#endif //PARELL_CROMOSOMA_HH
