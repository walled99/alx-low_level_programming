#include "main.h"

/***/

void times_table(void)
{
	int i;
	int j;
	int res;
	
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j+=i)
		{
			res = i*j;
			_putchar(res);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
