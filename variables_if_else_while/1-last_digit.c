#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		/* قسمنا المتغيرات في سطر جديد عشان ما نتجاوز 80 حرف */
		printf("Last digit of %d is %d and is greater than 5\n",
			n, last_digit);
	}
	else if (last_digit == 0)
	{
		/* هذا السطر قصير فما يحتاج نقسمه */
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		/* الجملة هنا مرة طويلة، فقسمناها على أمر طباعة مرتين */
		printf("Last digit of %d is %d and is less than 6 ", n, last_digit);
		printf("and not 0\n");
	}

	return (0);
}
