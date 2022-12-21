Main.h



#ifndef MAIN_H

#define MAIN_H

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

int _putchar(char c);

void print_rev(char *s);

void rev_string(char *s);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

void puts2(char *str);

int _atoi(char *s);

#endif

#include "main.h"
/**
 *  * reset_to_98-Resets the value of a variable back to 98.
 *   * @n:Variable to be reset.
 *    * Return:Void.
 *     */

{
    int n, *ptr_n;
    ptr_n = &n;
    n = 402;
    printf("n=%d\n", n);
      int reset_to_98(void);
    {
       *ptr_n = 98;
    }
    printf("n=%d\n", n);
    return (0);
}

