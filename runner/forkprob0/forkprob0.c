#include "csapp.h"

/* $begin forkprob0 */
int main() 
{
    int x = 1;

    if (Fork() == 0)
	printf("child: x=%d\n", ++x);  //line:ecf:forkprob0:childfork
    printf("parent: x=%d\n", --x);      //line:ecf:forkprob0:parentfork
    exit(0);
}
/* $end forkprob0 */

