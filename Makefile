build_draw:
	g++ -c draw.cpp -o draw.o
	g++ draw.o -o run_draw -lsfml-graphics -lsfml-window -lsfml-system
