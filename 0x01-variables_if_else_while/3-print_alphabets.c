#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize a and A, condition and update until z and Z
* Description: c and C parameter to print the alphabet in lower and uppercase
* section header: char
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);

}

