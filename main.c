#include "shell.h"

int main(void)
{
	char *eddiecommand = NULL;
	size_t l = 0;

	while (1)
	{
		ann_printf("eddieann$ ");
		if ((getline(&eddiecommand, &l, stdin)) == -1)
		{
			if (feof(stdin))
			{
				ann_printf("\n");
				exit(EXIT_SUCCESS);
			}
			else
			{
				perror("No input found\n");
				exit(EXIT_FAILURE);
			}
		}
		/*eddiecommand[strcspn(eddiecommand, "\n")] = '\0';*/
		eddie_execution(eddiecommand);
	}

	free(eddiecommand);
	return (0);
}
