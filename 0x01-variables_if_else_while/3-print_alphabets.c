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
	char alph = 'A';
   
	while (alph <= 'Z')
	{
		putchar(alph);
	        alph++;
	}
	return (0);
}
