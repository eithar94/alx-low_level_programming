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
	printf("%d", n);

/* Our own code will go here */
	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else if (n < 0)
	{
		printf("-98 is negative\n");
	}
	else
	{
		printf("0 is zero\n");
	}

	return (0);
}
