#include "eddieshell.h"

/**
 * eddie_strlen - function that retuns length of the str
 *
 * @eddiestr: - input string
 *
 * Return: 1 if success
 */
size_t eddie_strlen(const char *eddiestr)
{
	unsigned int l = 0;

	while (eddiestr[l] != '\0')
	{
		l++;
	}
	return (l);
}
