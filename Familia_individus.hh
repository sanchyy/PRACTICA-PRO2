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
  
  map < string, set<string> > trets;

  int n;

public:
  //Constructora

  /** @brief
      \pre true
      \post resulta una Familia_individus buida
  */
  Familia_individus();

  //Destructora
  /** @brief
      \pre el p.i. és una Família d'individus
      \post p.i. és buit
  */
  ~Familia_individus();

  //modificadora 
  /** @brief
      \pre n=#individus a llegir, m = mida cromosomes, familia i trets són buits;
      \post familia conté n individus de m cromosomes
  */
  void fer_experiment(int n,int m);

  /** @brief
      \pre true;
      \post map amb tots els individus i el parell de cromosomes de cada individu;
  */
  void llegir();

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
      \pre familia = BinTree de tots els individus i id = identificador de l'individu
      \post es retorna l'individu amb id = ID;
  */ 

private:
  /** Aquí s'implementaran les funcions necessàries
      per la implementació de les funcions públiques.
  */
};

#endif // FAMILIA_INDIVIDUS_HH
