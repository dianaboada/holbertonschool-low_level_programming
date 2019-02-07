#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a chart: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(unsigned short));
	printf("Size of a long int: %d bytes(s)\n", sizeof(int));
	printf("Size of long long int: %d bytes(s)\n", sizeof(unsigned int));
	printf("Size of a float: %d bytes(s)\n", sizeof(long));
	return (0);
}

