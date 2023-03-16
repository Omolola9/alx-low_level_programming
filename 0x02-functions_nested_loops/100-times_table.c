#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
* _mul - print a digit of mul
* @mul: multiplication comparator.
*/
void _mul(int mul)
{
if (mul <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(32);
_putchar(mul + '0');
}
else if (mul >= 10 && mul <= 99)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(mul / 10 + '0');
_putchar(mul % 10 + '0');
}
else if (mul >= 100 && mul < 226)
{
_putchar(44);
_putchar(32);
_putchar((mul / 100) + '0');
_putchar(((mul - 100) / 10) + '0');
_putchar(mul % 10 + '0');
}
}
/**
* print_times_table - print a trable nxn
* @n: munber of table
*/
=======
=======
>>>>>>> f8b892cdd3a5366db2f708542bf8c959113e5d3f
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to be treated
 *
 * Return: Number matrix
 */
<<<<<<< HEAD
>>>>>>> f8b892cdd3a5366db2f708542bf8c959113e5d3f
=======
>>>>>>> f8b892cdd3a5366db2f708542bf8c959113e5d3f
void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
<<<<<<< HEAD
<<<<<<< HEAD
}
=======
>>>>>>> f8b892cdd3a5366db2f708542bf8c959113e5d3f
=======
>>>>>>> f8b892cdd3a5366db2f708542bf8c959113e5d3f
