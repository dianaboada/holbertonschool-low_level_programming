#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize in a, condition and update until z
* Description: c parameter to print the alphabet from a to z in lowercase
* section header: int
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);

}

