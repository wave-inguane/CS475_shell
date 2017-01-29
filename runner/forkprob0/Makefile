forkprob0: forkprob0.o csapp.o
	gcc -o prog -g forkprob0.o csapp.o
csapp.o: csapp.c csapp.h
	gcc -c -g csapp.c
forkprob0.o: forkprob0.c csapp.h 
	gcc -c -g forkprob0.c
clean:
	rm -f prog forkprob0.o *.o *~


