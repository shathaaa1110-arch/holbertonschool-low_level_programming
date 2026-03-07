#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* نشيك إذا الحرف يقع بين A و Z */
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* إذا صح، رجع 1 */
	}

	return (0); /* غير كذا، رجع 0 */
}
