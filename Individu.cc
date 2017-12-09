#include <iostream>
using namespace std;
#include "Individu.hh"

Individu::Individu() {
  Parell_cromosomes Contingut_genetic;
  int id = 0;
  set <string> trets_individu;
}

Individu::~Individu(){}

void Individu::consulta_individu() {
	Contingut_genetic.escriure();
}

Parell_cromosomes& Individu::consulta_cromosoma() {
	return Contingut_genetic;
}

void Individu::afegir_tret(const string& t) {
	auto it = trets_individu.find(t);
	trets_individu.insert(it,t);
}

void Individu::treure_tret(const string& t) {
	auto it = trets_individu.find(t);
	trets_individu.erase(it);
}

void Individu::llegir(int m) {	
	Contingut_genetic.llegir(m);
}

void Individu::escriure() {
	Contingut_genetic.escriure();
	if (!trets_individu.empty()) {
		for (string s:trets_individu) cout << "  " << s << endl;
	}
}

void Individu::setId(int id) {
	this->id = id;
}

bool Individu::individu_te_aquest_tret(const string & t) {
	return trets_individu.find(t) != trets_individu.end();
}

