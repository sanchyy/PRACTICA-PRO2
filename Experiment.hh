#ifndef EXPERIMENT_HH
#define EXPERIMENT_HH

#include "Familia_individus.hh"
#include "BinTree.hh"
#include <iostream>
using namespace std;

class Experiment {
private:
	
	BinTree <int> main_tree; //guardar les id per escriure el subarbre
	
	Familia_individus fam;

public:

    /** @brief
		\pre Experiment
		\post S'ha creat un experiment nou
	*/
	Experiment();

	~Experiment();

    /** @brief
		\pre n = nombre d'individus i m = mida del Parell de cromosomes
		\post experiment començat i s'ha creat un arbre amb els individus i el respectiu parell de cromosomes
	*/
	void experiment(int n,int m);

	/** @brief
		\pre a és un arbre buit
		\post arbre <em> a </em> ha estat omplert segons les id que li arribaven pel canal estàndard d'entrada.
	*/
	void llegir(BinTree<int>& a);

	/** @brief
		\pre tret = Tret i id = ID
		\post s'afegeix tret a un individu amb id = ID. En cas que ja tingués aquest tret, sortirà <em>error</em> pel canal estàndar de sortida
	*/
	void afegir_tret(const string& tret, int id);

	/** @brief
		\pre tret = TRET i id = ID
		\post si l'individu amb id = ID no tenia aquest tret, s'escriurà <em>error</em> pel canal estàndard de sortida, en cas contrari, l'individu ja no tindrà el tret <em>tret</em>
	*/
	void treure_tret(const string& tret, int id);

	/** @brief
		\pre tret = TRET
		\post escriu pe canal estàndar de sortida els individus que contenen aquest trets
	*/
	void consulta_tret(const string& tret);

	/** @brief
		\pre id = ID
		\post escriure pel canal estàndard de sortida el Parell de cromosoma de l'individu amb id = ID
	*/
	void consulta_individu(int id);

	/** @brief
		\pre tret = TRET
		\post si el tret no existeix, s'escriurà error, si existeix, s'escriure el subarbre resultant
		en inordre pel canal estàndard de sortida.
	*/
	void distribucio_tret(const string& tret);

	/** @brief
		\pre arbre = arbre amb les id
		\post s'escriurà pel canal estàndard de sortida l'arbre inordre resultant 
	*/
	void escriure_arbre(const BinTree<int> &a, const string &t);
    
    /** @brief
		\pre a és l'arbre del qual volem fer la distribucio, aux és un arbre buit i t és el tret del qual volem fer la distribucio.
		\post aux = distribucio de l'arbre d'individus amb t
	*/
	void fes_distribucio(const BinTree <int> &a, BinTree <int> &aux,const string &t);
};




#endif //EXPERIMENT_HH
