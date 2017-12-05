#include "Cjt_Tret.hh"

Cjt_Tret::Cjt_Tret() {
	Trets.clear();
}

Cjt_Tret::~Cjt_Tret(){}


void Cjt_Tret::afegir_tret(int id, const string &t) {
	cout << "  ";
	auto it = Trets.find(t);
	if (it == Trets.end()) {
		it -> afegir_tret(id);
	}
	else cout << "error" << endl;
}

void Cjt_Tret::treure_tret(int id, const string &t) {
	cout << "  ";
	auto it = Trets.find(t);
	if (it != Trets.end()) {
		it -> treure_tret(id);
	}
	else cout << "error" << endl;
}

void Cjt_Tret::consulta_tret(const string &t) {
	cout << " ";
	auto it = Trets.find(t);
	if (it == Trets.end()) cout << "error" << endl;
	else {
		it ->second.consulta_tret();
	}
}

bool distribucio_tret(string& tret) {
	auto it = Trets.find(t);
	return it != Trets.end();
}
