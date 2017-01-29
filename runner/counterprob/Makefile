counterprob: counterprob.o csapp.o
	gcc -o prog -g counterprob.o csapp.o
csapp.o: csapp.c csapp.h
	gcc -c -g csapp.c
counterprob.o: counterprob.c csapp.h 
	gcc -c -g counterprob.c
clean:
	rm -f prog counterprob.o *.o *~


