#include "Tret.hh"
using namespace std;

Tret::Tret() {
	carac_tret = Parell_cromosomes();
	individus_amb_aquest_tret.clear();
}

Tret::~Tret(){}

Parell_cromosomes& Tret::consulta_cromosoma() {
	return carac_tret;
}

void Tret::afegir_tret(int id, Parell_cromosomes& pc) {
	individus_amb_aquest_tret.insert(id);
	carac_tret.update_add(pc);
}

void Tret::treure_tret(int id, Parell_cromosomes& pc) {
	auto it = individus_amb_aquest_tret.find(id);
	individus_amb_aquest_tret.erase(it);
	carac_tret.update();
}

void Tret::consulta_tret() {
	carac_tret.escriure();
}

set <int> Tret::consulta_individus() {
	return individus_amb_aquest_tret;
}