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

  /** @brief
      \pre p.i. és un Individu no buit.
      \post es retorna un Parell_cromosomes amb el contingut genètic d'aquell individu
  */
  Parell_cromosomes& consulta_cromosoma();

   /** @brief
      \pre el p.i. és un individu no buit
      \post retorna la id de l'individu
  */
  int consulta_id();

  /** @brief
      \pre el p.i. és un individu no buit i tret, és el tret que volem consultar si individu hi perany.
      \post retorna true si individu perant al tret 't', altrament si no hi perany
  */
  bool individu_te_aquest_tret(const string & t);

  //modificadora
  
  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha registrat el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà "error" pel canal estàndard de sortida
  */
  void afegir_tret(const string& t);


  /** @brief
      \pre el p.i. és un Individu
      \post s'ha llegit el Parell_cromosoma pel canal estandard d'entrada
  */
  void treure_tret(const string& t);

  /** @brief
      \pre el p.i. Individu sense contingut genetic (Parell cromosomes)
      \post s'ha llegit el Parell_cromosoma pel canal estandard d'entrada i ha estat afegit a l'individu del p.i.
  */
  void llegir(int m);

  /** @brief
      \pre el p.i. és un Individu no buit
      \post s'ha escrit el Parell_cromosoma pel canal estandard de sortida
  */
  void escriure();

  /** @brief
      \pre el p.i. és un Individu buit
      \post la id de l'individu = 'id'
  */
  void setId(int id);

  /** @brief
      \pre el p.i. és un Individu no buit
      \post s'ha escrit pel canal estàndard de sortida els trets que conté l'individu
  */
  void escriure_trets_individu();

};


#endif //INDIVIDU_HH
