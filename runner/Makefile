waitprob3: waitprob3.o csapp.o
	gcc -o prog -g waitprob3.o csapp.o
csapp.o: csapp.c csapp.h
	gcc -c -g csapp.c
waitprob3.o: waitprob3.c csapp.h 
	gcc -c -g waitprob3.c
clean:
	rm -f prog waitprob3.o *.o *~


