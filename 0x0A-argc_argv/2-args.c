#include <stdio.h>

int main (int argc, char *argv[])
{
    int daniel_counter = 0;

    for (; daniel_counter < argc; daniel_counter++)
    {
        printf("%s\n", argv[daniel_counter]);
    }

    return (0);
}