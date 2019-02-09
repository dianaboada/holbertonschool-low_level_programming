#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n, o;

	for (n = 48 ; n <= 57; n++)
	{
		for (o = 48 ; o <= 57 ; o++)
		{
		putchar(n);
		putchar(o);
	if (n + o < 144)
	{
		putchar(44);
		putchar(32);
	}
	}
	}
	putchar('\n');
	return (0);

}
