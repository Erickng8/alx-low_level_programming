#include <stdio.h>

/**
 * main - letters in upper and lower cases
 *
 * Return: always 0
 */
int main(void)
{
	char val;
	char val_1;

	for (val = 'a'; val <= 'z'; val++)
	{
		putchar(val);
	}
	for (val_1 = 'A'; val_1 <= 'Z'; val_1++)
	{
		putchar(val_1);
	}
	putchar('\n');
	return (0);
}
