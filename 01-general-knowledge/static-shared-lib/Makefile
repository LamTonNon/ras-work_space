

static:
	ar -rcs lib/static/libhello_static.a obj/helloKhanh.o obj/helloWorld.o

shared:
	gcc -shared obj/helloKhanh.o obj/helloWorld.o -o lib/shared/libhello_shared.so

link_static: 
	#gcc obj/main.o -Llib/static -lhello -o bin/statically-linked
	gcc -o hello obj/main.o -Llib/static -lhello_static

link_shared:
	@sudo cp lib/shared/libhello_shared.so /usr/lib
	@gcc -o hello obj/main.o -Llib/shared -lhello_shared
	@./hello
	@sudo rm -rf /usr/lib/libhello_shared.so

obj_static:
	gcc -c src/helloKhanh.c -o obj/helloKhanh.o -I./inc
	gcc -c src/helloWorld.c -o obj/helloWorld.o -I./inc

obj_shared:
	gcc -c -fPIC src/helloKhanh.c -o obj/helloKhanh.o -I./inc
	gcc -c -fPIC src/helloWorld.c -o obj/helloWorld.o -I./inc

all:
	gcc -c main.c -o obj/main.o -I./inc

clean:
	rm -rf hello
	rm -rf obj/* bin/*
