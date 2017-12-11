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
      \post resulta un Individu amb id id
  */


  //destructora

  ~Individu();

  //consultora

  /** @brief
      \pre id = ID
      \post s'escriure pel canal estandard de sortida el parell de cromosomes
      de l'individu amb identificador <em>ID</em> i el nom dels seus tret per ordre alfabètic;
  */
  void consulta_individu();

  Parell_cromosomes& consulta_cromosoma();

  //modificadora
  
  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha registrat el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà "error" pel canal estàndard de sortida
  */
  void afegir_tret(const string& t);

  void treure_tret(const string& t);

  void llegir(int m);

  void escriure();

  int consulta_id();

  bool individu_te_aquest_tret(const string & t);

  void setId(int id);

  void escriure_trets_individu();

};


#endif //INDIVIDU_HH
