#include "function_pointers.h"

/**
* print_name - Function that prints a name.
* @name: string of name.
* @f: pointer function.
*
* Return: Void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
