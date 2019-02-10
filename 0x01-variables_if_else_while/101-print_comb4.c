#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int centena, decena, unidad;

	for (centena = 48 ; centena <= 57; centena++)
	{
		for (decena = 48 ; decena <= 57; decena++)
		{
		for (unidad = 48 ; unidad <= 57 ; unidad++)
		{
			if (centena > decena)
				continue;
			if (decena > unidad)
				continue;
			if (centena == decena)
				continue;
			if (decena == unidad)
				continue;

		putchar(centena);
		putchar(decena);
		putchar(unidad);
	if (centena + decena + unidad < 168)
	{
		putchar(44);
		putchar(32);
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
