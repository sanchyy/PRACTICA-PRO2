#include "Familia_individus.hh"

Familia_individus::Familia_individus() {
	main_tree = BinTree <int> ();
	familia.clear();
	n = 0;
}

Familia_individus::~Familia_individus(){}

void Familia_individus::experiment(int n, int m) {
	Familia_individus f;
	f.llegir_arbre(main_tree);
	f.llegir_map(n);
	Parell_cromosomes::defineix_mida(m);
}

void Familia_individus::llegir_map(int n) {
	for (int i = 1; i <= n; ++i)
		familia.insert({i,Individu()});
}

void Familia_individus::llegir_arbre(BinTree <int>& a) {
	int x;
	cin >> x;
	if (x == 0) return;
	else {
		BinTree <int> left;
		BinTree <int> right;
		llegir_arbre(left);
		llegir_arbre(right);
		a = BinTree <int>(x,left,right);
	}
}

void Familia_individus::i_escriure_arbre(const BinTree <int>& a, const string &t) {
	auto it = familia.find(a.value());
	bool b = it ->second.individu_te_aquest_tret(t);
	if (a.empty()) return;
	else {
		BinTree <int> left;
		BinTree <int> right;
		escriure_arbre(left,t);
		escriure_arbre(right,t);
		if (b) cout << a.value();
		else cout << '-' << a.value();
	}
}

void Familia_individus::escriure_arbre(const string &tret) {
	void escriure_arbre(const BinTree <int>& a, const string &tret);
}

void Familia_individus::consulta_individu(int id) {
	auto it = familia.find(id);
	if (it == familia.end()) cout << "  error" << endl;
	else 
		it ->second.consulta_individu();
}