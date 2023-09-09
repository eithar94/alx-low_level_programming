#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
        n = rand();
	/* Our own code will go here */
	printf("The last digit of the number 98 is 8 \n");
	return (0);
}

