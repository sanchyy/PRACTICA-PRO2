#include "Individu.hh"

Individu::Individu() {
	Contingut_genetic = Parell_cromosomes();
	id = 0;
	trets_individu.clear();
}

Individu::Individu(int id) {
	Contingut_genetic = Parell_cromosomes();
	this -> id = id;
	trets_individu.clear();
}

Individu::~Individu(){}

Parell_cromosomes &Individu::consulta_cromosoma(){
	return Contingut_genetic;
}

void Individu::consulta_individu() {
	Contingut_genetic.escriure();
	for (string strung:trets_individu)
		cout << "  " << strung << endl;
}

bool individu_te_aquest_tret(const string &t) {
	return trets_individu.find(t) != trets_individu.end();
}


