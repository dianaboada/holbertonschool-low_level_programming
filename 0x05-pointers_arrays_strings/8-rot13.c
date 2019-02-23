#include "holberton.h"
#include <stdio.h>

/**
* *rot13 - Function that encodes a string using rot13.
* @msg: entry msg to encode.
*
* Return: encoded msg.
*/
char *rot13(char *msg)
{
	int index;

	for (index = 0; msg[index] != '\0'; index++)
	{
		int rot13 = 0;

		if ((msg[index] >= 'A' && msg[index] <= 'Z') ||
				(msg[index] >= 'a' && msg[index] <= 'z'))
		{
			rot13 = 13;

			for (; (msg[index] >= 'M' && msg[index] <= 'Z') ||
					(msg[index] >= 'm' && msg[index] <= 'z');)
			{
				rot13 = -13;
				break;
			}
		}
		msg[index] = msg[index] + rot13;
	}
	return (msg);
}
