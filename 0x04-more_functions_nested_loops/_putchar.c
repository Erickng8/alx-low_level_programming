#include "main.h"
#include <unistd.h>

/**
 * _putchar writess the character c to stdout
 * @c the character to print
 *
 * Return: 1 On succces
 * oN error -1 is returned and ermo is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
