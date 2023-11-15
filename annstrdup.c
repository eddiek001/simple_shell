#include "eddieshell.h"
/**
 * ann_strdup - a function that duplicates a string
 *
 * @dupstr: input string
 *
 * Return: duplicate string
 */

char *ann_strdup(const char *dupstr)
{
	unsigned int l = eddie_strlen(dupstr) + 1;
	char *anndup;

	anndup = malloc(l);

	if (anndup != NULL)
	{
		ann_strcpy(anndup, dupstr);
	}
	return (anndup);
}
