#include "shell.h"

void ann_printf(const char *annstr)
{
	write(1, annstr, strlen(annstr));
}
