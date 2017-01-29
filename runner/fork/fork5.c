/* $begin forkprob3 */
#include "csapp.h"

int main() 
{
    int x = 3;

    if (Fork() != 0)
	printf("x=%d\n", ++x); //parent x=4

    printf("x=%d\n", --x); //parent x=3, child x=2
    exit(0);
}
/* $end forkprob3 */

