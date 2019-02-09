#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize 0-9 ASCII and a-f, condition and update 9f
* Description: a parameter to print alphabet in reverse
* section header: int
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	int n;

	for (n = 48 ; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
