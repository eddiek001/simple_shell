#include "eddieshell.h"
/**
 * main - Function to the entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	char *eddiecommand = NULL;
	size_t l = 0;
	ssize_t eddiegetline;

	while (1)
	{
		ann_printf("eddieann$ ");
		eddiegetline = getline(&eddiecommand, &l, stdin);
		if (eddiegetline == -1)
		{
			write(STDOUT_FILENO, "\n", 1);
			/*free(eddiecommand);*/
			break;
		}
		eddiecommand[strcspn(eddiecommand, "\n")] = '\0';
		eddie_execution(eddiecommand);
	}

	/*free(eddiecommand);*/
	return (0);
}
