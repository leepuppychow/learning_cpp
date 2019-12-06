draw:
	g++ -c random/draw.cpp -o draw.o
	g++ draw.o -o run_draw -lsfml-graphics -lsfml-window -lsfml-system
	rm draw.o
	./run_draw

promises:
	g++ concurrency/promises.cpp -o run_promises -pthread
	./run_promises
