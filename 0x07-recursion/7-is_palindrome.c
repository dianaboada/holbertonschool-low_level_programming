#include "holberton.h"

/**
* palindrome_head_tail - Funtion that compares the head and tail of the string
* @head: integer head of thee string.
* @tail: integer tail of the string.
* @length: length of the string.
* @s: String.
*
* Return: Int.
*/
int palindrome_head_tail(int head, int tail, int length, char *s)
{
	if (length == 0)
		return (1);
	if (head <= length / 2)
	{
		if (*(s + head) != *(s +  tail))
		return (0);
		else
		return (palindrome_head_tail(head + 1, tail - 1, length, s));
	}
return (1);
}

/**
* _strlen_recursion - Function that the length of the string
* @s: String
*
* Return: Int.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}


/**
* is_palindrome - Function that returns 1 if a string is a palindrome else 0.
* @s: string.
*
* Return: Int.
*/
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (palindrome_head_tail(0, length - 1, length, s));
}
