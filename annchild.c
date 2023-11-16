#include "eddieshell.h"

/**
 * anncreate_chp - create child pid
 * @argv: -input
 */

void anncreate_chp(char *argv[])
{
	pid_t ch_p;

	ch_p = fork();/*creation of the child process*/
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
	}
}
