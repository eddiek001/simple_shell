#ifndef _EDDIESHELL_H
#define _EDDIESHELL_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void ann_printf(const char *annstr);
void eddie_execution(char *eddiecommand);
char *eddie_findpath(char *eddiecmd);
void anncreate_chp(char *argv[]);
void eddienviron(void);
void annexit(char *argv[]);
size_t eddie_strlen(const char *eddiestr);
char *ann_strcpy(char *anndest, const char *annsrc);
int eddie_strcmp(const char *es1, const char *es2);
char *ann_strdup(const char *dupstr);

extern char **environ;

#endif
