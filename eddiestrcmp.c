#include "eddieshell.h"

int eddie_strcmp(const char *es1, const char *es2)
{
	while (*es1 != '\0' && *es1 == *es2)
	{
		es1++;
		es2++;
	}
	return (*es1 - *es2);
}
