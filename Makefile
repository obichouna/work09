all: dir.c
	gcc -o dir.out dir.c


clean:
	-rm *.out
	-rm *.*~

run: all
	./dir.out
