#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include <dirent.h>
#include <errno.h>
extern char **envi;
int cmond_prompt(void);
char *read_stdin(void);
int string_lenght(char *x);
int _putchar(char x);
char *stringtok(char *pointer, const char *deli);
char *fullpath(char **a, char *path, char *cp);
int checkbuiltinfun(char **a, char *buf, int status);
int _forkpro(char **a, char *buf, char *fullpath);
char *getenviron(const char *nam);
int env(void);
void putss(char *string);
char *_mem(char *a, char x, unsigned int c);
char *stringconcat(char *des, char *sr);
int stringcmp(const char *str1, const char *str2);
int stringcount(char *s);
char *stringdupl(char *s);
char **tokenarray(char *buf);

int _pathcmp(const char *str1, const char *str2);
char *concat(char *tmpo, char **a, char *token);
#endif
