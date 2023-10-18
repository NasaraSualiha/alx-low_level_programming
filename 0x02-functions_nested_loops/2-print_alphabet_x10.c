#include "main.h"

/**
  *print_alphabet_x10 - print alphabets 10x
  */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	do {
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	n++;
	_putchar('\n');
	} while (n < 10);
}
