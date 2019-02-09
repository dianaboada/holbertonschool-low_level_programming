#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize 48-57 ASCII with a 44coma and 32space after, 
* condition and update 8f, print combination
* Description: a parameter to print alphabet in reverse
* section header: int
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
		putchar(c);
	if (n <= 56)
		putchar(s);
	}

	putchar('\n');
	return (0);

}

