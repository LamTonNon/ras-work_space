

static:
	ar rcs lib/static/libhello_static.a obj/helloKhanh.o obj/helloWorld.o

shared:
	gcc -shared obj/helloKhanh.o obj/helloWorld.o -o lib/shared/libhello_shared.so

link: 
	#gcc obj/main.o -Llib/static -lhello -o bin/statically-linked
	gcc -o hello obj/main.o -L lib/static -l hello_static
 
obj_static:
	gcc -c src/helloKhanh.c -o obj/helloKhanh.o -I./inc
	gcc -c src/helloWorld.c -o obj/helloWorld.o -I./inc

obj_shared:
	gcc -c -fPIC src/helloKhanh.c -o obj/helloKhanh.o -I./inc
	gcc -c -fPIC src/helloWorld.c -o obj/helloWorld.o -I./inc

all:
	gcc -c main.c -o obj/main.o -I./inc

clean:
	rm -rf obj/* bin/*
