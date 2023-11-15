#include "eddieshell.h"
/**
 * eddie_strcmp - a function that compares a string
 * @es1: string 1
 * @es2: string 2
 *
 * Return: string1 - string 2
 */
int eddie_strcmp(const char *es1, const char *es2)
{
	while (*es1 != '\0' && *es1 == *es2)
	{
		es1++;
		es2++;
	}
	return (*es1 - *es2);
}
