#include <iostream>
#include <map>
#include "Familia_individus.hh"
using namespace std;

Familia_individus::Familia_individus() {
  map <int,Individu> familia;
  map <string,Tret> trets;
  int n = 0;
}

Familia_individus::Familia_individus(int m) {
  map <int,Individu> familia;
  map <string,Tret> trets;
  int n = m;
}

Familia_individus::~Familia_individus(){}

void Familia_individus::llegir(int n, int mida_parell) {

	for (int i = 1; i  <= n; ++i) {
		Individu ind;
		ind.setId(i);
		ind.llegir(mida_parell);
		familia[i] = ind;
	}
}

void Familia_individus::afegir_tret(const string& t, int id) {
	auto punter = trets.find(t); //punter a tret
	auto it = familia.find(id); //punter a individu
	if (it != familia.end() and not it ->second.individu_te_aquest_tret(t)) { //id existeix o id ja té el tret
		if (punter == trets.end()){ 
			trets[t] = Tret();
			trets[t].modificar_carac(it->second.consulta_cromosoma());
		}
		else {
			trets[t].afegir_tret(id,it->second.consulta_cromosoma());
		}
		it ->second.afegir_tret(t);
		trets[t].afegir_alset(id);
	}
	else cout << "  error" << endl;
}

void Familia_individus::treure_tret(const string& t, int id) {
	auto punter = trets.find(t);
	auto it = familia.find(id);
	if (punter == trets.end() or it == familia.end() or not it->second.individu_te_aquest_tret(t)) 
		cout << "  error" << endl;
	else {
		it->second.treure_tret(t);
		int mida = punter->second.consultar_size();
		if (mida == 1) {
			trets.erase(punter);
		}
		else {
			punter->second.treure_tret(id);
			auto it_tret = trets.find(t);
			bool first = true;
			Parell_cromosomes p;
			for (int x:it_tret->second.consulta_carac_tret()) {
				auto it_fam = familia.find(x); //busco la id al map
				Individu ind = it_fam -> second;
				if (first){
					p = ind.consulta_cromosoma();
					first = not first;					
				} 
				else {
					p.update_add(ind.consulta_cromosoma());
				}
				
			}
			punter->second.modificar_carac(p);
		}
	}
}

void Familia_individus::consulta_tret(const string &t) {
	auto it = trets.find(t);
	if (it == trets.end()) cout << "  error" << endl;
	else {
		cout << "  " << it->first << endl;
		it->second.consulta_tret();
	}
}

void Familia_individus::consulta_individu(int id) {
	auto it = familia.find(id);
	if (it == familia.end()) 
		cout << "  error" << endl;
	else {
		it ->second.escriure();
		it ->second.escriure_trets_individu();
	}

}

bool Familia_individus::distribucio_tret(const string &t) {
	auto it = trets.find(t);
	return it != trets.end();
}

bool Familia_individus::el_te(int id,const string &t) {
	auto it = familia.find(id);
	return it ->second.individu_te_aquest_tret(t);
}