#include "main.h"

/**
 * _strstr - Find Substring.
 * @haystack: The string to be searched.
 * @needle: The string to be located.
 *
 * Return: If the string is located - a pointer to the beginning
 * of the substring.
 * if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
