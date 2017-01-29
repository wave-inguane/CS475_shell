fork: fork.o csapp.o
	gcc -o prog -g fork.o csapp.o
csapp.o: csapp.c csapp.h
	gcc -c -g csapp.c
fork.o: fork.c csapp.h 
	gcc -c -g fork.c
clean:
	rm -f prog fork.o *.o *~


