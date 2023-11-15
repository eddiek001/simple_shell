#include "eddieshell.h"

/**
 * annexit - function to exit shell
 * @argv: input string
 */

void annexit(char *argv[])
{
	int status;

	status = 0;
	if (argv[1] != NULL)
	{
		status = atoi(argv[1]);
	}
	free(argv[0]);
	free(argv);
	exit(status);
}
