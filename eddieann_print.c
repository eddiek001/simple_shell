#include "eddieshell.h"

/**
 * ann_printf - printf function
 * @annstr: Input string
 */

void ann_printf(const char *annstr)
{
	write(STDOUT_FILENO, annstr, eddie_strlen(annstr));
}
