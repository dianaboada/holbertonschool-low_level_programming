#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int decena1, unidad1, decena2, unidad2;

	for (decena1 = 48 ; decena1 <= 57; decena1++)
	{
		for (unidad1 = 48; unidad1 <= 57; unidad1++)
		{
			for (decena2 = 48 ; decena2 <= 57; decena2++)
			{
				for (unidad2 = 48 ; unidad2 <= 57 ; unidad2++)
				{
					if (decena1 + unidad1 > decena2 + unidad2)
						continue;
					if (decena1 == decena2 && unidad1 == unidad2)
						continue;

					putchar(decena1);
					putchar(unidad1);
					putchar(32);
					putchar(decena2);
					putchar(unidad2);
					if (!(decena1 == 57 && unidad1 == 56 && decena2 == 57 && unidad2 == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
