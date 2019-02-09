#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize 48, condition and update until 57 in ASCII
* Description: n parameter to print numbers from 0 to 9
* section header: int
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);

}
