#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
