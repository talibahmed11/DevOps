all: main.exe

main.exe: main.o
	gcc -o main.exe main.o -lxml2

main.o: main.c
	gcc -c main.c -I/usr/include/libxml2

clean:
	rm -f main.o main.exe
