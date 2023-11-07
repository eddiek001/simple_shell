#include "shell.h"

void eddie_execution(void)
{
	pid_t ch_p;
	int annexec;
	char *argv[] = {"/usr/bin/ls", "-l", NULL};

	ch_p = fork();/*creation of the child process*/
	if (ch_p == -1)/*if the child process has an error*/
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (ch_p == 0)/*child process created successfully*/
	{
		annexec = execve(argv[0], argv, NULL);
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
