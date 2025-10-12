all: lexique.exe

lexique.exe: main.o Lexique.o utilitaire.o
	g++ -std=c++17 -O2 -Wall -Wextra -o lexique.exe main.o Lexique.o utilitaire.o

main.o: main.cpp Lexique.hpp utilitaire.hpp
	g++ -std=c++17 -O2 -Wall -Wextra -c main.cpp

Lexique.o: Lexique.cpp Lexique.hpp utilitaire.hpp
	g++ -std=c++17 -O2 -Wall -Wextra -c Lexique.cpp

utilitaire.o: utilitaire.cpp utilitaire.hpp
	g++ -std=c++17 -O2 -Wall -Wextra -c utilitaire.cpp
