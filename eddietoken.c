#include "shell.h"

void ann_token(char eddiecommand[])
{
	char *delim = " ";
	char *anntoken;

	anntoken = strtok(eddiecommand, delim);
	while (anntoken != NULL)
	{
		ann_printf(anntoken);
		anntoken = strtok(NULL, delim);
	}
}

