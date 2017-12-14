#ifndef FAMILIA_INDIVIDUS_HH
#define FAMILIA_INDIVIDUS_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <map>
#endif // NO_DIAGRAM

#include "Individu.hh"
#include "Tret.hh"
using namespace std;

class Familia_individus {
private:

  map <int,Individu> familia;
  map <string,Tret> trets;
  int n;

public:
  //Constructora

  /** @brief
      \pre true
      \post resulta una Familia_individus buida
  */
  Familia_individus(int n);

  Familia_individus();
  //Destructora
  /** @brief
      \pre el p.i. és una Família d'individus
      \post p.i. és buit
  */
  ~Familia_individus();

  //modificadora 

  /** @brief
      \pre true;
      \post map amb tots els individus i el parell de cromosomes de cada individu;
  */

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha desvinculat el tret de l'individu si aquest el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void treure_tret(const string& t, int id);

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void afegir_tret(const string& t, int id); 

  /** @brief
      \pre n és el #individus  i m la mida del parell de cromosomes de l'experiment
      \post s'ha llegit pe0
  */
  void llegir(int n, int m);

  /** @brief
      \pre t = nom del tret
      \post s'ha imprès pel canal estàndard de sortida, el Parell de cromosomes que fan possible el tret, els individus que el componen
  */
  void consulta_tret(const string &t);

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  void consulta_individu(int id);

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  bool distribucio_tret(const string &t);

  /** @brief
      \pre t = nom del tret i id = identificador de l'individu
      \post s'ha afegit el tret de l'individu si aquest no el tenia, en cas contrari, simplement es mostrarà <em>error</em> pel canal estàndard de sortida
  */
  bool el_te(int id, const string &t); 

private:
  /** Aquí s'implementaran les funcions necessàries
      per la implementació de les funcions públiques.
  */
};

#endif // FAMILIA_INDIVIDUS_HH
