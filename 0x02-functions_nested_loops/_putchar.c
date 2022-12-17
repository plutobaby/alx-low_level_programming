#include "main.h"
#include <unistd.h>
/**
 *
 * main - Entry point
 * Description: Print _putchar followed by a new line
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
