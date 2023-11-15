#include "eddieshell.h"

size_t eddie_strlen(const char *eddiestr)
{
	unsigned int l = 0;

	while (eddiestr[l] != '\0')
	{
		l++;
	}
	return (l);
}
