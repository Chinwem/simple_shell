#ifndef shell_h
#define shell_h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>

#define bf 64
#define buf 1024
extern char **environ;

char *_getline();
int _strcmp(const char *s, const char *t);
char **_split(char *r);
char *_getpath(char *a);
int _envp(void);
int xte_external(char **x, char *h);
int _fork(char **z);
int _execute_command(char **g, char *d);
char *_getenv(const char *name);
void _prerror(char *e);
void _exitt(char *ag);
int _strncmp(const char *s1, const char *s2, size_t p);
int _atoi(const char *src);
char *_strtokk(char *str, const char *del);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, const char *src);
int _strlen(char *s);
int _sstrlen(const char *s);
int _sstrncmp(char *s1, const char *s2, size_t p);
void *_realloc(void *ptr, size_t os, size_t nsize);
void _memcpy(void *dest, const void *src, unsigned int n);
char *_read_input();

#endif
