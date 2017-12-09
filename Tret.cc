#include "Tret.hh"
#include <iostream>
using namespace std;



Tret::Tret() {
	Parell_cromosomes carac_tret;
  	set <int> individus_amb_aquest_tret;
}

Tret::~Tret(){}

void Tret::consulta_tret() {
	cerr << "vaig a escriure els cromosomes per consultar tret 2" << endl;
	carac_tret.escriure();
	cerr << "L'hauria d'haver tret" << endl;
	for (int x:individus_amb_aquest_tret) cout << "  " << x << endl;
	}

void Tret::afegir_tret(int id, Parell_cromosomes& c1) {
	cerr << "died afegir_tret ?" << endl;
	auto punter = individus_amb_aquest_tret.find(id);
	cerr << "id: " << id << endl;
	individus_amb_aquest_tret.insert(punter,id);
	carac_tret.update_add(c1);
}
void Tret::treure_tret(int id) {
	auto punter = individus_amb_aquest_tret.find(id);
	individus_amb_aquest_tret.erase(punter);
}


bool Tret::individu_te_aquest_tret(int id) {
	return individus_amb_aquest_tret.find(id) != individus_amb_aquest_tret.end();
}

void Tret::modificar_carac(const Parell_cromosomes& c1) {
  	carac_tret = c1;
}

int Tret::consultar_size() {
  	return individus_amb_aquest_tret.size();
}

const set <int> &Tret::consulta_carac_tret() {
  	return individus_amb_aquest_tret;
}