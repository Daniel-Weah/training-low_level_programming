#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * This function iterates through each element of the given array and applies
 * the specified action function to each element. It checks for NULL pointers
 * and ensures that the size is greater than zero before proceeding with the
 * iteration.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    
    if (array != NULL && action != NULL && size > 0)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}