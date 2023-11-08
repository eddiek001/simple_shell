#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void ann_printf(const char *annstr);
void ann_token(char eddiecommand[]);
void eddie_execution(char *eddiecommand);

#endif
