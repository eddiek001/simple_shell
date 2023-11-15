#include "eddieshell.h"
/**
 * eddie_execution - Function to execute the command
 * @eddiecommand: input command
 */

void eddie_execution(char *eddiecommand)
{
	int c = 0;
	char *argv[1000], *eddiecmd_pathfile, *anntoken;

	for (anntoken = strtok(eddiecommand, " ");
			anntoken; anntoken = strtok(NULL, " "))
	{
		argv[c++] = anntoken;
	}
	argv[c] = NULL;
	if (argv[0] != NULL)
	{
		if (strcmp(argv[0], "exit") == 0)
		{
			annexit(argv);
			return;
		}
		else if (strcmp(argv[0], "eddienv") == 0)
		{
			eddienviron();
			return;
		}
	}
	eddiecmd_pathfile = eddie_findpath(argv[0]);
	if (eddiecmd_pathfile == NULL)
	{
		ann_printf("NO COMMAND FOUND\n");
		return;
	}
	anncreate_chp(argv);

	free(eddiecmd_pathfile);
}
