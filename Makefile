OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Wno-uninitialized  -Wno-sign-compare -std=c++11

program.exe: program.o Experiment.o Familia_individus.o Individu.o Parell_cromosomes.o Tret.o
	g++ -o program.exe program.o Experiment.o Familia_individus.o Individu.o Parell_cromosomes.o Tret.o

Parell_cromosomes.o: Parell_cromosomes.cc Parell_cromosomes.hh
	g++ -c Parell_cromosomes.cc $(OPCIONS)

Individu.o: Individu.cc Individu.hh
	g++ -c Individu.cc $(OPCIONS)

Familia_individus.o: Familia_individus.cc Familia_individus.hh
	g++ -c Familia_individus.cc $(OPCIONS)

Tret.o: Tret.cc Tret.hh
	g++ -c Tret.cc $(OPCIONS)

Experiment.o: Experiment.cc Experiment.hh
	g++ -c Experiment.cc $(OPCIONS)

program.o: program.cc
	g++ -c program.cc $(OPCIONS)

all: program.exe

clean:
	rm *.o
	rm *.gch
tar:
	tar -cvf practica.tar *.cc *.hh Makefile
