#include "main.h"

/**
 * _strcat - Entry point
 *
 * Destination: Concatenates two strings
 * @dest: Destination string
 * @src: Origin string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != 0; len1++)
	{
	}
	for (len2 = 0; src[len2] != 0; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	dest[len1] = 0;
	return (dest);
}
