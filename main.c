#include "shell.h"

int main(void)
{
	char *spc = NULL;
	size_t l = 0;

	while (1)
	{
		ann_printf("eddieann$ ");
		getline(&spc, &l, stdin);
		ann_printf(spc);
	}

	free(spc);
	return (0);
}
