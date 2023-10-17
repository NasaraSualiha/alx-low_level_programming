#include <stdio.h>

/**
  *main - entry point
  *Description: possible combinations of
  *single digit numbers
  *Return: Always 0
  */
int main(void)
{
	int n = 0;

	do {
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	} while (n <= 9);

	putchar('\n');
	return (0);
}
