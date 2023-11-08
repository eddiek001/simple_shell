#include "shell.h"

void eddie_execution(char *eddiecommand)
{
	pid_t ch_p;
	int annexec, c = 0;
	char *argv[164], *eddiecmd;
	char *anntoken;

	ch_p = fork();/*creation of the child process*/
	if (ch_p == -1)/*if the child process has an error*/
	{
		perror("eddiefork");
		exit(EXIT_FAILURE);
	}
	else if (ch_p == 0)/*child process created successfully*/
	{
		anntoken = strtok(eddiecommand, " ");
		eddiecmd = anntoken;
		while (anntoken != NULL)
		{
			argv[c] = anntoken;
			anntoken = strtok(NULL, " ");
			c++;
		}
		argv[c] = NULL; 
		annexec = execve(eddiecmd, argv, NULL);
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
}
