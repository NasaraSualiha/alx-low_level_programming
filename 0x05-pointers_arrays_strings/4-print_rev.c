#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int r = 0;
	int o;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (o = r; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
