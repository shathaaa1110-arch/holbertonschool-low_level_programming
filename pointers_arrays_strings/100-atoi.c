#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;
	int flag = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			res = (res * 10) + (s[i] - '0');
		}
		else if (flag == 1)
		{
			break;
		}
		i++;
	}

	return (res * sign);
}
