#include "main.h"

/**
 * check_divisor - function to check if n has any divisors
 * @n: number to check for primality
 * @divisor: current divisor being tested
 *
 * Return: 1 if no divisors found (prime), 0 if divisor found (not prime)
 */

int check_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_divisor(n, divisor + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (check_divisor(n, 3));
}
