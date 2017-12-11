#include "Parell_cromosomes.hh"	

Parell_cromosomes::Parell_cromosomes() {
	int m = 0;
	vector<pair <char,char> > Parell_cromosoma;
}

Parell_cromosomes::~Parell_cromosomes(){}

void Parell_cromosomes::defineix_mida(int mida) {
	this->m = mida;
}

void Parell_cromosomes::escriure() {
	cout << "  ";
	for (int i = 0; i < Parell_cromosoma.size(); ++i) cout << Parell_cromosoma[i].first;
	cout << endl << "  ";
	for (int i = 0; i < Parell_cromosoma.size(); ++i) cout << Parell_cromosoma[i].second;
	cout << endl;
}

void Parell_cromosomes::llegir(int m) {

	vector<pair <char,char> > a(m);

	for (int i = 0; i < m; ++i) cin >> a[i].first;
	for (int i = 0; i < m; ++i) cin >> a[i].second;

	this->Parell_cromosoma = a;
}

void Parell_cromosomes::update_add(Parell_cromosomes& c2) {
	int tam = Parell_cromosoma.size();
	for (int i = 0; i < tam; ++i) {
		if ((Parell_cromosoma[i].first != c2.consulta_iessim(i,1)) or (Parell_cromosoma[i].first != Parell_cromosoma[i].second) or (Parell_cromosoma[i].second != c2.consulta_iessim(i,0)) or (c2.consulta_iessim(i,1) != c2.consulta_iessim(i,0))) {
			Parell_cromosoma[i].first = '-';
			Parell_cromosoma[i].second = '-';
		}	
	}
}

char Parell_cromosomes::consulta_iessim(int i, bool b) {
	return b?Parell_cromosoma[i].first:Parell_cromosoma[i].second;
}

