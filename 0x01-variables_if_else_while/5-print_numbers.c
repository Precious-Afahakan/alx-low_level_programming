#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		if (!(a == 101 || a == 113))
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
