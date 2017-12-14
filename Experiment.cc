#include "Experiment.hh"
#include <iostream>
using namespace std;

void Experiment::experiment(int n,int m) {
	Parell_cromosomes p;
	p.defineix_mida(m);
	fam = Familia_individus(n);
	this->llegir(main_tree);
	fam.llegir(n, m);
}

Experiment::Experiment() {
	main_tree = BinTree <int>();
	Familia_individus fam;
}

Experiment::~Experiment(){}

void Experiment::afegir_tret(const string& tret, int id) {
	fam.afegir_tret(tret,id);
}

void Experiment::treure_tret(const string& tret, int id) {
	fam.treure_tret(tret,id);
}

void Experiment::consulta_tret(const string& tret) {
	fam.consulta_tret(tret);
}

void Experiment::consulta_individu(int id) {
	fam.consulta_individu(id);
}

void Experiment::escriure_arbre(const BinTree<int> &a, const string &t) {
	if (not a.empty()) {
		int x = a.value();
		bool b = fam.el_te(x,t);
		escriure_arbre(a.left(),t);
		cout << ' ';
		if (b) cout << x;
		else cout << -x;
		escriure_arbre(a.right(),t);
	}
}

void Experiment::llegir (BinTree <int> &a) {
	int x;
	cin >> x;
	if (x != 0) {
		BinTree <int> left;
		BinTree <int> right;
		llegir(left);
		llegir(right);
		a = BinTree <int>(x,left,right);
	}
}

void Experiment::distribucio_tret(const string &tret) {
	bool b = fam.distribucio_tret(tret);
	if(not b) cout << "  error" << endl;
	else {	
		BinTree <int> arbre_main = main_tree;
		BinTree <int> aux;
		cout << ' ';
		fes_distribucio(arbre_main,aux,tret);
		escriure_arbre(aux,tret);
		cout << endl;
	}
}

void Experiment::fes_distribucio(const BinTree <int> &a, BinTree <int> &aux, const string &t) {
	if (a.empty()) return;
	else {
		int x = a.value();
		BinTree <int> left;
		fes_distribucio(a.left(),left,t);
		BinTree <int> right; 
		fes_distribucio(a.right(), right,t);
		if (fam.el_te(x,t) or (not left.empty() or not right.empty()))
			//si té el tret, anirà a l'arbre de distribucio
			//si és fulla, anirà a l'arbre de distribució,
			//ja que serà el projenitor pare del tret
			aux = BinTree <int> (x,left,right);			
	}		
}
