#include "holberton.h"

/**
* rev_string - A function that reverses a string.
* @s: string.
*
* Return: void.
*/
void rev_string(char *s)
{
	int forward = 0; /*Initial position looking forward 'H'*/
	int backward; /*Initial position looking backward 'n'*/
	int aux; /*backup variable, host the value to be replaced on each position*/

	for (backward = 0 ; s[backward] != '\0'; backward++)
	{

	}
	backward--;
	while (forward < backward)
	{
		aux = s[forward];
		s[forward] = s[backward];
		s[backward] = aux;
		forward++;
		backward--;
	}
}
