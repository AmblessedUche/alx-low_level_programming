#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 */
void times_table(void)
{
	int _1;
	int _2;
	int prod;

	for (_1 = 0; _1 < 10; _1++)
	{
		for (_2 = 0; _2 < 10; _2++)
		{
			prod = _1 * _2;

			if (_2 != 0)
			{
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}

			if (prod >= 10)
				_putchar('0' + prod / 10);
			_putchar('0' + prod % 10);

			if (_2 != 9)
				_putchar(',');

		}
		_putchar('\n');
	}
}
