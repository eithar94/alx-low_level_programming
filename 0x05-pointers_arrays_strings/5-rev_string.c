#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, l1, l2;

	l1 = 0;
	l2 = 0;

	while (s[l1] != '\0')
	{
		l1++;
	}

	l1 = l2 - 1;

	for (i = 0; i < l2 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l2];
		s[l2--] = tmp;
	}
}
