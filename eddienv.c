#include "eddieshell.h"
/**
 * eddienviron - function to receive input
 */

void eddienviron(void)
{
	char **eddienv = environ;

	while (*eddienv != NULL)
	{
		ann_printf(*eddienv);
		write(1, "\n", 1);
		eddienv++;
	}
}
