#include "holberton.h"

/**
* print_alphabetx10 - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int alphabetx10;
	int tentimes = 1;

	while (tentimes < 10)
	{
		tentimes++;

	for (alphabetx10 = 97 ; alphabetx10 <= 122 ; alphabetx10++)
	{
		_putchar(alphabetx10);
	}
		_putchar('\n');
	}
}

