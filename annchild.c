#include "shell.h"

void anncreate_chp(char *argv[])
{
	int annexec;
	pid_t ch_p;

	ch_p = fork();/*creation of the child process*/
        if (ch_p == -1)/*if the child process has an error*/
        {
                perror("eddiefork");
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
