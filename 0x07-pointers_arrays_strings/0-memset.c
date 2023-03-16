#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: a pointer ro the memory area to filled.
 * @c: the character.
 * @n: the number of bytes.
 *
 * Return: a pointer to the memory area s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
