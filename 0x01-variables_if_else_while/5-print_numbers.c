#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* function_name - for initialize 1, condition and update until 9
* Description: n parameter to print numbers from 0 to 9
* section header: char
* Return: Always 0 (Success)
*/
int main(void)
{
	char n;	
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);

}

