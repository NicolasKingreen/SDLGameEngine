all:
	g++ *.cpp -o main -I src/include -L src/lib -lmingw32 -lSDL2main -lSDL2