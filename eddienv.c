#include "shell.h"

extern char **environ;

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
