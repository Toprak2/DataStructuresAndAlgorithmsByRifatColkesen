All: compile run

compile:
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/BSTree.o -c ./src/BSTree.cpp

	g++ -I ./include/ -o ./bin/Program ./lib/Node.o ./lib/BSTree.o ./src/Program.cpp

run:
	./bin/Program