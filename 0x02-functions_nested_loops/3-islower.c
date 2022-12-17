#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * Description: A function that checks for lowercase characters
 * @c: character to check
 *
 * Return: Always 0
 */

int _islower(int c)

{
	return (c >= 'a' && c <= 'z');

}
