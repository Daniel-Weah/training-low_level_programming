#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument
 *
 * Return: A pointer to the function that corresponds to the operator
 */

 int main(int argc, char *argv[])
    {
        int a, b;
        int (*op_func)(int, int);
    
        if (argc != 4)
        {
            printf("Error\n");
            return (98);
        }
    
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        op_func = get_op_func(argv[2]);
    
        if (op_func == NULL)
        {
            printf("Error\n");
            return (99);
        }

        if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
        {
            printf("Error\n");
            return (100);
        }
    
        printf("%d\n", op_func(a, b));
        return (0);
    }