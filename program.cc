#include <iostream>
using namespace std;
#include "Experiment.hh"

int main() {
  Experiment e;
  string accio;
  cin >> accio;
  while (accio != "fi") {
    if (accio == "experiment") {
      int n,m;
      cin >> n >> m;
      cout << accio << ' ' << n << ' ' << m << endl;
      e.experiment(n,m);
    }
    else if (accio == "afegir") {
      string t;
      int id; 
      cin >> t >> id;
      cout << accio << ' ' << t << ' ' << id << endl;
      e.afegir_tret(t,id);
    }
    else if (accio == "treure") {
      string t;
      int id; 
      cin >> t >> id;
      cout << accio << ' ' << t << ' ' << id << endl;
      e.treure_tret(t,id);
    }
    else if (accio == "consulta_tret") {
      string t; cin >> t;
      cout << accio << ' ' << t << endl;
      e.consulta_tret(t);
    }
    else if (accio == "consulta_individu") {

      cerr << "consultar_individu" << endl;

      int id; cin >> id;
      cout << accio << ' ' << id << endl;
      e.consulta_individu(id);
    }
    else if (accio == "distribucio_tret") {
      string t; cin >> t;
      cout << accio << ' '  << t << endl;
      e.distribucio_tret(t);
      cout << endl;
    }
    cin >> accio;
  }
  return 0;
}
