#include "main.h"

/**
 * times_table - prints the 9 times table staring from 0
 */
void times_table(void)
{
	int x, s, z;

	for (x = 0; x < 10; x++)
	{
		for (s = 0; s < 10; s++)
		{
			z = s * x;
			if (s == 0)
			{
				_putchar(z = '0');
			}
			if (z < 10 && s != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(z + '0');
			}
			else if (z >= 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((z % 10) + '0');
			_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
