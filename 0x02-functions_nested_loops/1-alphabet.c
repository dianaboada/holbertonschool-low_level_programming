#include "holberton.h"

/**
* print_alphabet - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
int alphalow;

for (alphalow = 97 ; alphalow <= 122 ; alphalow++)
{
	_putchar(alphalow);
}
_putchar('\n');
}

