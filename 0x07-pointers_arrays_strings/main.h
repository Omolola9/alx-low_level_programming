#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: peniel nunu
 * description: header contain the same prototypes as in pervious projects
 */
#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif