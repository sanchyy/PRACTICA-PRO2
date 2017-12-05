#ifndef FAMILIA_INDIVIDUS_HH
#define FAMILIA_INDIVIDUS_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <map>
#endif // NO_DIAGRAM

#include "Individu.hh"
#include "Cjt_Tret.hh"
#include "BinTree.hh"
using namespace std;

class Familia_individus {
private:

  BinTree <int> main_tree;

  map <int,Individu> familia;

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
    \pre n = nombre d'individus i m = mida del Parell de cromosomes
    \post experiment començat i s'ha creat un arbre amb els individus i el respectiu parell de cromosomes
  */
  void experiment(int n,int m);

  /** @brief
    \pre tret = Tret i id = ID
    \post s'afegeix tret a un individu amb id = ID. En cas que ja tingués aquest tret, sortirà <em>error</em> pel canal estàndar de sortida
  */
  
  void llegir_arbre(BinTree<int>& a);

  void llegir_map(int n);

  void escriure_arbre(const string &tret);

  void consulta_individu(int id);

  void distribucio_tret(const BinTree <int> &a, string& tret);

  void afegir_tret()
};


#endif // FAMILIA_INDIVIDUS_HH
