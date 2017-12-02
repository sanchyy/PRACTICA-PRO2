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

  /** @brief
      \pre c1 i c2 son parells de cromosomes no buits
      \post resulta un parell de cromosoma intersecció entre c1 i c2
  */
  Parell_cromosomes(const Parell_cromosomes & c1, const Parell_cromosomes & c2); 

public:

  //Constructora
  /** @brief
      \pre true
      \post resulta un parell de cromosoma de mida m
  */
  Parell_cromosomes(int m);
  
  /** @brief
      \pre c1 un parell de cromosomes no buits
      \post resulta un parell de cromosoma igual a c1;
  */
  Parell_cromosomes(const Parell_cromosomes & c1);

  /** @brief
      \pre el p.i. és un Parell_cromosoma.
      \post p.i. és buit.
  */
  ~Parell_cromosomes();

  void mida(int m);

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


  /** @brief
      \pre el p.i. és un Parell_cromosoma, pot estar buit o no serho
      \post el p.i. ara és la intersecció millorada dels dos cromosomes
  */
Parell_cromosomes& update(const Parell_cromosomes & c1, const Parell_cromosomes & c2) const;

char cromosoma_pos(int i, bool b);

void guionet(int i, bool b);
};

#endif //PARELL_CROMOSOMA_HH
