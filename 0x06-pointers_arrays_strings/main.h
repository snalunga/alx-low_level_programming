#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Nalunga Sarah
 * Desc: Header file containing prototypes for all functions used in the 0x006.c - More pointers, arrays and strings directory.
 */
int _putchar(char c);
char *_strncat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int_strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *leet13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
