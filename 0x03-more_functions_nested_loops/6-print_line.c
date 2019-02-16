#include "holberton.h"

/**
* print_line - A function that draws a straight line in the terminal.
* @n: is the number of times the character _ should be printed.
*
* Return: void.
*/
void print_line(int n)
{
        int line;

        for (line = 0 ; line < n ; line++)
        {
                _putchar('_');
        }
        _putchar ('\n');

}