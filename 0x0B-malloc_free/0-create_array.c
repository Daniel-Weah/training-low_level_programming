#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails or size is 0.
 */

char *create_array(unsigned int size, char c)
{
    unsigned int counter = 0;
    char *my_array;

    if (size == 0)
    {
        return NULL;
    }
    my_array = malloc(size * sizeof(char));
    if (my_array == NULL)
    {
        return NULL;
    }
    while (counter < size)
    {
        my_array[counter] = c;
        counter++;
    }
    my_array[counter] = '\0';
    return (my_array);
}