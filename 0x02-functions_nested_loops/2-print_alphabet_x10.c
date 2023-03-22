#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char a;
	int x = 1;

	while (x <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');

		x++;
	}
}
