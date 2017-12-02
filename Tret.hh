#ifndef TRETS_HH
#define TRETS_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <set>
#endif // NO_DIAGRAM

#include "Parell_cromosomes.hh"

class Tret {
private:
  Parell_cromosomes carac_tret(int m);
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


  set<int> consultar_individus();

  const Parell_cromosomes& consultar_parell();

  void update(const Parell_cromosomes& interseccio);


  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void afegir_tret(int id, const Parell_cromosomes& c1);

  /** @brief
      \pre true
      \post s'ha escrit pel canal estàndard de sortida l'arbre resultant en inordre.
  */

  bool individu_te_aquest_tret(int id);
};

#endif //TRETS_HH