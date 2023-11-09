#include "main.h"
/**
 * swap_int - swappin values of 2 integers
 * @a: first integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
