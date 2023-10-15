#include <stdio.h>

/**
  *main - entry point
  *Description - exclude q and c in printing
  *lowercase alphabets
  *Return: Always 0
  */
int main(void)
{
	char c = 'a';

	do {
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	} while (c <= 'z');
	putchar('\n');
	return (0);
}
