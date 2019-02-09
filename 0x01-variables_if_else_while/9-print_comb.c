#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: print combination with man ASCII
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 44;
	int s = 32;
	int n;

	for (n = 48 ; n <= 57; n++)
	{
		putchar(n);
		if (n <= 56)
		{
			putchar(c);
			putchar(s);
		}
	}

	putchar('\n');
	return (0);

}
