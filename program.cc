#include <iostream>
#include "Familia_individus.hh"
#include "Cjt_Tret.hh"
using namespace std;

int main() {
	string accio; cin >> accio;
	Familia_individus f;
	Cjt_Tret cjt;
	while (accio != "fi") {
	    if (accio == "experiment") {
	    	int n,m;
	    	cin >> n >> m;
	    	f.experiment(n,m);
	    }
	    else if (accio == "afegir") {
	 	    string t;
	 	    int id; 
	 	    cin >> t >> id;
	        cjt.afegir_tret(id,t);
	    }
	    else if (accio == "treure") {
	        string t;
	        int id; 
	        cin >> t >> id;
	        cjt.treure_tret(id,t);
	    }
	    else if (accio == "consultar_tret") {
	        string t; cin >> t;
	        cjt.consulta_tret(t);
	    }
	    else if (accio == "consultar_individu") {
	        int id; cin >> id;
	        f.consulta_individu(id);
	    }
	    else if (accio == "distribucio_tret") {
	        string t; cin >> t;
	        bool b = cjt.distribucio_tret(t);
	        if (b) 
	        	f.escriure_arbre(t);
	        else 
	        	cout << "  error" << endl;
	    }

	    cin >> accio;
  }
}