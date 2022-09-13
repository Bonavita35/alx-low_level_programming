#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * with using only putchar
 * Return: 0 (if success)
 */

int main(void)
{ 
	in i, o, u;

	for (i = '0'; i <= '9'; i++)
	{
		for (o = i + 1; o <= '9'; o++)
		{
			for (u = o + 1; u <= '9'; u++)
			{
				if ((o != i) && (u != o))
				{
					putchar(i);
					putchar(o);
					putchar(u);

					if (i == '7' && o == '8)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
