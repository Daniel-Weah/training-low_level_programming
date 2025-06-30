#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: If n == 0, return 0.
 *         Otherwise, return the sum of all parameters.
 */

 int sum_them_all(const unsigned int n, ...)
 {
     unsigned int i, sum = 0;
    va_list mynumbers;
    va_start(mynumbers, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(mynumbers, int);
    }

    va_end(mynumbers);
    return (sum);
 }