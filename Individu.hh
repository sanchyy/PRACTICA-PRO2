#ifndef INDIVIDU_HH
#define INDIVIDU_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <map>
#include <set>
#endif // NO_DIAGRAM

#include "Parell_cromosomes.hh"
#include "Tret.hh"

class Individu {
private:
  Parell_cromosomes Contingut_genetic;
  int id;
  set <string> trets_individu;

public:

  //constructora

  /** @brief
      \pre true
      \post resulta un Individu buit
  */
  Individu();

   /** @brief
      \pre true
      \post resulta un Individu buit
  */
  Individu(int id);

  //destructora

  ~Individu();

  //consultora

  /** @brief
      \pre id = ID
      \post s'escriure pel canal estandard de sortida el parell de cromosomes
      de l'individu amb identificador <em>ID</em> i el nom dels seus tret per ordre alfabètic;
  */
  void consulta_individu();


  const Parell_cromosomes& consulta_contingut();

  Parell_cromosomes& consulta_cromosoma() const;

  //modificadora
  
  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha registrat el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà "error" pel canal estàndard de sortida
  */
  void afegir_tret(const string& t);

  void treure_tret(const string& t);

  bool te_tret(const string& t);

  void llegir();

  void escriure();

  int consulta_id();
};


#endif //INDIVIDU_HH
