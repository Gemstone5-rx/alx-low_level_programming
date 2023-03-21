#include "main.h"

/**
 * print_sign - Tells  if the input number is greater, equal or less than zero.
 *
 * @n: number to be checked
 *
 * Return: 1 > zero. 0 is zero. -1 < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
