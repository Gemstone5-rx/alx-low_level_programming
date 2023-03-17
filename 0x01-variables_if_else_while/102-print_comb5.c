#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int m;
	int o;

	int n2;
	int m2;
	int o2;

	while (n <= 98)
	{
		m = (n / 10 + '0');
		o = (n % 10 + '0');
		n2 = 0;
		while (n2 <= 99)
		{
			m2 = (n2 / 10 + '0');
			o2 = (n2 % 10 + '0');

			if (n < n2)
			{
				putchar(m);
				putchar(o);
				putchar(' ');
				putchar(m2);
				putchar(o2);

				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
