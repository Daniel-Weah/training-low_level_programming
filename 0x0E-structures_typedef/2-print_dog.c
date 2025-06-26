#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner);
}
