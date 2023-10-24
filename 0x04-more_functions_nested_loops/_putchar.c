#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes the character c to stdout
  *
  *Return: on succes, 1
  *On error - -1 returned and error set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
