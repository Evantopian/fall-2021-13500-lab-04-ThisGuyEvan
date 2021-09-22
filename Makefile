main: main.o figures.o checkerboards.o
	g++ -o main main.o figures.o checkerboards.o

main.o: main.cpp figures.h checkerboards.h 
	g++ -c main.cpp

figures.o: figures.cpp figures.h
	g++ -c figures.cpp

checkerboards.o: checkerboards.cpp checkerboards.h
	g++ -c checkerboards.cpp


clean:
	rm -f main.o figures.o

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"
