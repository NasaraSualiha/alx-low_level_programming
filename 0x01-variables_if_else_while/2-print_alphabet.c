#include <stdio.h>

/**
  *main -Point of entry
  *Description: print alphabets in
  *lowercase
  *Return: Always 0
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

