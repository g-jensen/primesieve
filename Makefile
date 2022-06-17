compile:
	gcc -c src/*.c
	gcc -c *.c
	gcc *.o -o main -lm
clean:
	rm *.o
