/* $begin forkprob5 */
#include "csapp.h"

void doit() 
{
    if (Fork() == 0) {
		Fork();
		printf("hello\n");
		exit(0);
    }
    return;
}

int main() 
{
    doit();
    printf("hello from main\n");
    exit(0);
}
/* $end forkprob5 */
/*
 * OUTPUT
 hello from main
 hello
 hello
 */
