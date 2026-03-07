#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* ننسخ الحروف حبة حبة لين نوصل للنهاية */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* نحط الحرف المخفي في النهاية بيدينا */
	dest[i] = '\0';

	return (dest);
}
