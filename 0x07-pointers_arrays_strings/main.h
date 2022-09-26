#ifndef MAIN_H
#define MAIN_H

/**
 * File: mai.h
 * Auth: moke-square
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x07-pointers_arrays_strings directory.
 */

#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char c, unsigned int n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif