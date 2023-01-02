#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @b: The characte to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: changed array with new value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++;)
	{
		s[i] = b;
		n--;
	}
	return (0);
}

