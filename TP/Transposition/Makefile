all: Partie Plateau Case
	g++ Partie.o Plateau.o Case.o jeu.cpp -o jeu

Partie: Partie.h Plateau
	g++ Partie.cpp -c

Plateau: Plateau.h Case
	g++ Plateau.cpp -c

Case: Case.h
	g++ Case.cpp -c
