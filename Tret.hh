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

  /** @brief
      \pre t = nom d'un possible tret
      \post si no existeix, s'escriurà <em>error</em> pel canal estandard de sortida,
      en cas contrari, s'escriurà pel canal estandart de sortida la possible
      combinacio de gens que genera aquest tret, i els individus que el tenen
  */
  void consulta_tret();

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha desvinculat el tret de l'individu si aquest el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void treure_tret(int id);

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void afegir_tret(int id, Parell_cromosomes& c1);

  /** @brief
      \pre true
      \post s'ha escrit pel canal estàndard de sortida l'arbre resultant en inordre.
  */

  bool individu_te_aquest_tret(int id);

  /** @brief
      \pre Parell_cromosomes c1 és un Parell de cromosomes el qual volem que sigui la característica del tret
      \post carac del tret = Parell de cromosomes c1
  */

  void modificar_carac(const Parell_cromosomes& c1);

  /** @brief
      \pre true
      \post retorna la mida del set (individus_amb_aquest_tret) del paramatre implicit
  */
  int consultar_size();

  /** @brief
      \pre Parell_cromosomes c1 és un Parell de cromosomes el qual volem que sigui la característica del tret
      \post carac del tret = Parell de cromosomes c1
  */
  
  const set <int> &consulta_carac_tret();
  

  /** @brief
      \pre id = ID que vols afegir al set
      \post la id ha estat afegida
  */
  void afegir_alset(int id);
};

#endif //TRETS_HH