#include "holberton.h"

/**
* *_strstr - Function that locates a substring.
* @haystack: string where to search.
* @needle: string to search.
*
* Return: char.
*/
char *_strstr(char *haystack, char *needle)
{
	int i_needle;
	int i_haystack;
	int flag = 0;
	int i_final = 0;
	int flag1 = 0;

	for (i_needle = 0; needle[i_needle] != '\0'; i_needle++)
	{
		for (i_haystack = 0; haystack[i_haystack] != '\0'; i_haystack++)
		{
			if (needle[i_needle] == haystack[i_haystack])
			{
				flag = 1;
				if (flag1 == 0)
				{
					i_final = i_haystack;
					flag1 = 1;
				}
				break;
			}
		}
		if (flag == 1)
			continue;
		else
			return ('\0');
	}
	return (&haystack[i_final]);
}
