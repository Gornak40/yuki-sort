all:
	g++ main.cpp -O3 -funroll-loops -Wall -o main

clean:
	rm main

run:
	./main
