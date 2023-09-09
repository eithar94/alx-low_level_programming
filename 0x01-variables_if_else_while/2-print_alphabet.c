#include <stdio.h>

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		/* increment the variable (ie: a becomes b)*/
		alphabet++;
	}
	putchar('\n');
	return (0);

}
