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
		if (eddie_strcmp(argv[0], "exit") == 0)
		{
			annexit(argv);
			return;
		}
		else if (eddie_strcmp(argv[0], "eddienv") == 0)
		{
			eddienviron();
			return;
		}
	}
	eddiecmd_pathfile = eddie_findpath(argv[0]);
	if (eddiecmd_pathfile == NULL)
	{
		ann_printf("NO COMMAND FOUND\n");
	}
	else
	{
		pid_t ch_p = fork();/*creation of the child process*/
		if (ch_p == -1)/*if the child process has an error*/
		{
			perror("eddiefork");
			exit(EXIT_FAILURE);
		}
		if (ch_p == 0)/*child process created successfully*/
		{
			execve(argv[0], argv, NULL);
			perror("annexec");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);/*parent process*/
			free(eddiecmd_pathfile);
		}
	}
}
