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
	int i_needle;/*Index(posicion de cada letra) de la palabra que busco, substring*/
	int i_haystack;/*Index de la frase donde busco la palabra string*/
	int flag = 0;/*encontre la posible letra*/
	int i_final = 0;/*Donde guardo la posicion incial de la palabra en el pajar*/
	int flag1 = 0;/*encontre la primera letra de la palabra esta si es*/

	for (i_needle = 0; needle[i_needle] != '\0'; i_needle++) /*recorro la aguja en el pajar lo que estoy buscando*/
	{
		for (; haystack[i_haystack] != '\0'; i_haystack++) /*el pajar, donde estoy buscando*/
		{
			if (needle[i_needle] == haystack[i_haystack])/*comparo la letra de la palabra que busco con la letra de donde estoy buscando*/
			{ /*-->si lo encuentro creo una bandera*/
				flag = 1;/*encontre un match*/
				if (flag1 == 0)/*encontre la primera letra que necesito*/
				{
					i_final = i_haystack;/*si es la primera letra le asigno esa posicion a la variable que voy a usar para retornar i_final*/
					flag1 = 1;/*Cambio el valor para que no vuelva a entrar al if no me cambie el indice de la letra que encontre*/
				}
				break;/*Me salgo del pajar, del for interno*/
			}
			else
			{
				flag1 = 0;/*reinicia la busqueda de la palabra y que vuelva a buscar la primera letra, ees decir que la que encontro es falsa*/
				i_needle = 0;/*reinicia la busqueda desde el principio, vuelvo a buscar la primera letra de mi palabra*/
			}
		}
		if (flag == 1)/*-->primer bandera que me va a servir para seguir buscando, si ya encontre la letra que estoy buscando paso a la siguiente con el continue*/
			continue;/*no he terminado de encontrar todas las letras de mi palabra, sigo a la siguiente*/
		}
		return (&haystack[i_final]);/*la aguja, retorno exactamente la palabra que busco*/
}
