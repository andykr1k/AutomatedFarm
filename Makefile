AutoFarm.x: main.o 
	g++ -std=c++17 main.o -o AutoFarm.x

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

clean:
	rm -f AutoFarm.x main.o