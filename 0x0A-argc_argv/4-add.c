#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int check_number(char *s)
{
    while (*s)
    {
       if (!isdigit(*s))
            return (0);
        s++;
    }

    return (1);
    
}

int main(int argc, char *argv[])
{
    int daniel_counter = 1, sum = 0;

    for (; daniel_counter < argc; daniel_counter++)
    {
        if (!check_number(argv[daniel_counter]))
        {
            puts("Error");
            return (1);
        }
        sum += atoi(argv[daniel_counter]);
    }

    printf("%d\n", sum);

    return (0);
}