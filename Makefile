main:main.o caculate.o
	gcc main.o caculate.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:caculate.c
	gcc -c caculate.c

clean:
	rm main *.o
        
