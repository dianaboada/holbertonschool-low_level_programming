#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize z, condition and update until a
* Description: a parameter to print alphabet in reverse
* section header: int
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
