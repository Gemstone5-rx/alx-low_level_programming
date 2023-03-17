#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, o;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (o = 0; o < 10; o++)
			{
				if (n < m && m < o)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(o + '0');
					if (n + m + o != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
