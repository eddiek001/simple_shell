#include "eddieshell.h"
/**
 * ann_strcpy - a function that copies a string
 *
 * @anndest: input
 * @annsrc: input
 *
 * Return: ann dest
 */

char *ann_strcpy(char *anndest, const char *annsrc)
{
	char *ann_dest = anndest;

	while ((*anndest++ = *annsrc++) != '\0')
	{
		/*copy each char of the string*/
	}
	return (ann_dest);
}
