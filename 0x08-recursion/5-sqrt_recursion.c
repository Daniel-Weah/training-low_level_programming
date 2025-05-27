#include <stdio.h>

int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root, or -1 if not a natural square root
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return _sqrt_helper(n, 0);
}

int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    if (guess * guess > n)
        return -1;
    return _sqrt_helper(n, guess + 1);
}

