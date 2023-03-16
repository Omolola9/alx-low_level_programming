#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if  (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
