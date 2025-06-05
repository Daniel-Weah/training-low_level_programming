#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int daniel_num1, daniel_num2;

    if (argc !=3){
        puts("Error");
        return (1);
    }

    daniel_num1 = atoi(argv[1]);
    daniel_num2 = atoi(argv[2]);

    printf("%d\n", daniel_num1 * daniel_num2);
    
    return (0);
}