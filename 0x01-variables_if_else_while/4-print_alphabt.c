#include <stdio.h>
/**
 * main - lowercase except q and e
 *
 * Return: Always 0
*/
int main(void)
{
	char letter; e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
