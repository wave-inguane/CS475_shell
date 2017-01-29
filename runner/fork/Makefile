fork8: fork8.o csapp.o
	gcc -o prog -g fork8.o csapp.o
csapp.o: csapp.c csapp.h
	gcc -c -g csapp.c
fork8.o: fork8.c csapp.h 
	gcc -c -g fork8.c
clean:
	rm -f prog fork8.o *.o *~


