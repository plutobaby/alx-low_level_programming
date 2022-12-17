#include "main.h"

/**
 * add - Entry point
 * Description: Add two integers and returns the result
 * @n: first integer input
 * @m: second integer input
 *
 * Return: Sum of n and m
 */

void print_alphabet_x10(void)

{
	char ch;
	int n = 0;
	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		n++;
		_putchar('\n');
	}
}
