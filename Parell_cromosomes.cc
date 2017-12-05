#include "Parell_cromosomes.hh"

Parell_cromosomes::Parell_cromosomes() {
	Parell_cromosoma = vector <pair <char,char> > (m);
}

/*Parell_cromosomes::Parell_cromosomes(int m) {
	this -> m = m;
	Parell_cromosoma = vector <pair <char,char> > (m);
}*/


Parell_cromosomes::~Parell_cromosomes(){}

void Parell_cromosomes::defineix_mida(int mida) {
	m = mida;
}

void Parell_cromosomes::escriure() {
	cout << "  ";
	for (int i = 0; i < m; ++i) cout << Parell_cromosoma[i].first;
	cout << endl << "  " ;
	for (int i = 0; i < m; ++i) cout << Parell_cromosoma[i].second;
	cout << endl;
}

void Parell_cromosomes::llegir() {
	for (int i = 0; i < m; ++i) cin >> Parell_cromosoma[i].first;
	for (int i = 0; i < m; ++i) cin >> Parell_cromosoma[i].second;
}

void Parell_cromosomes::update_add(Parell_cromosomes& c2) {
	for (int i = 0; i < m; ++i) {
		if (Parell_cromosoma[i].first != c2.consulta_iessim(i,1))
			Parell_cromosoma[i].first = '-';
		if (Parell_cromosoma[i].second != c2.consulta_iessim(i,0))
			Parell_cromosoma[i].second = '-';
	}
}

char Parell_cromosomes::consulta_iessim(int i, bool b) {
	return b?Parell_cromosoma[i].first:Parell_cromosoma[i].second;
}
