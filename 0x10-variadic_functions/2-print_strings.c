#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

 void print_strings(const char *separator, const unsigned int n, ...)
 {
    unsigned int i;
    va_list strings;
    va_start(strings, n);

    for (i = 0; i < n; i++)
    {
        const char *str = va_arg(strings, const char *);
        if (str == NULL)
            str = "(nil)";
        printf("%s", str);
        if (i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(strings);
}
