#include "shell.h"

void eddie_execution(char *eddiecommand)
{
	pid_t ch_p;
	int annexec, c = 0;
	char *argv[1000], *eddiecmd_pathfile, *anntoken;

	for (anntoken = strtok(eddiecommand, " "); anntoken; anntoken = strtok(NULL, " "))
	{
		argv[c++] = anntoken;
	}
	argv[c] = NULL;
	if (!(eddiecmd_pathfile = eddie_findpath(argv[0])))
	{
		ann_printf("NO COMMAND FOUND\n");
		return;
	}
	ch_p = fork();/*creation of the child process*/
	if (ch_p == -1)/*if the child process has an error*/
	{
		perror("eddiefork");
		exit(EXIT_FAILURE);
	}
	else if (ch_p == 0)/*child process created successfully*/
	{
		annexec = execve(eddiecmd_pathfile, argv, NULL);
		if (annexec == -1)
		{
			perror("annexec");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);/*parent process*/
	}
	free(eddiecmd_pathfile);
}
