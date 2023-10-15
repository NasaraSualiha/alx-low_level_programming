#include <stdio.h>

/**
  *main -entry point
  *Description: print all numbers starting fro 0
  *using putchar
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
