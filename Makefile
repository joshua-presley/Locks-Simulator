Simulator: main.o Operator.o
	g++ -o ./build/locks-sim main.o Operator.o

main.o: 
	g++ -c ./src/main.cpp

Operator.o:
	g++ -c ./src/Operator/Operator.cpp

clean: 
	rm main.o Operator.o