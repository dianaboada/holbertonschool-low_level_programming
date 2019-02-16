#include <stdio.h>

/**
* Fizz-Buzz - A function that prints numbers from 1 to 100
* replacing mutiple of 3 with Fizz and multiple of 5 with Buzz.
*
* Return: int.
*/
int main(void)
{
	int numbers;

	for (numbers = 1 ; numbers <= 100 ; numbers++)
	{
		if (numbers % 3 == 0)
		{
			printf("Fizz");
		}
		if (numbers % 5 == 0)
		{
			printf("Buzz");
		}
		if (numbers % 3 != 0 && numbers % 5 != 0)
		{
			printf("%d", numbers);
		}
		if (numbers == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	return (0);
}

