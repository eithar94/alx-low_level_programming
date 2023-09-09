#include <stdio.h>

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		/* print the value of the variable*/
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	char alphABET = 'A';
   
	while (alphABET <= 'Z')
	{
		putchar(alphABET);
	        alphABET++;
	}
	return (0);
}
