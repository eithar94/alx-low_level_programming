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
	alphabet = 'A';
   
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
	        alphabet++;
	}
	return (0);
}
