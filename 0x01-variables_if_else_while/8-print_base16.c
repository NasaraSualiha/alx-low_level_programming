#include <stdio.h>

/**
  *main - entry point
  *Description: print all numbers in base 16
  *in lowercase
  *Return: Always 0
  */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
