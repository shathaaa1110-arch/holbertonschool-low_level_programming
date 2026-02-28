#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
