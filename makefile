all: lexico.o lexico.h Montador.cpp
	g++ -g -W -Wall Montador.cpp lexico.o -o montador

clean:
	-rm *.o
	-rm montador

lexico: lexico.h lexico.cpp
	g++ -g -W -Wall -c lexico.cpp -o lexico.o