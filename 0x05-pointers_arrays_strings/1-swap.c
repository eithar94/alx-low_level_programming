#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:first  pointer 
 * @b:second  pointer
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
