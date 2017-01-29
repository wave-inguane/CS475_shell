#include "csapp.h"

/* $begin fork */
/* $begin wasidefork */
int main() 
{
    pid_t pid;
    int x = 1;

    pid = Fork(); //line:ecf:forkreturn
    if (pid == 0) {  /* Child */
	printf("child : x=%d\n", ++x); //line:ecf:childprint
	exit(0);
    }else{

    /* Parent */
    printf("parent: x=%d\n", --x); //line:ecf:parentprint
		printf("child pid = %d\n", pid);
    exit(0);
		}
}
/* $end fork */
/* $end wasidefork */

