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

	alphabet = 'A';
   
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
	        alphabet++;
	}

	putchar('\n');
	return (0);
}
