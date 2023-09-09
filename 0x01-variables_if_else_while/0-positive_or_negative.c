#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* no more header */

/* betty style main doc doc */
int main(void)
{

	int n;

	srand(time(0));
	n = rand()  - RAND_MAX / 2;

	printf("98 is positive\n");
	printf("-98 is negative\n");
	printf("0 is zero\n");

	return (0);
}
