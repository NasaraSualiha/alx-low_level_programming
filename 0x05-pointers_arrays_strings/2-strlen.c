#include "main.h"

/**
 *_strlen - returns length of string
 *@s: character to br chrcked for length
 *Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

