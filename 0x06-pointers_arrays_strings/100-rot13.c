#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @s: String to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
    int i = 0;
    int j;
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (s[i])
    {
        j = 0;
        while (j < 52 && alpha[j] != s[i])
            j++;
        
        if (j < 52)
            s[i] = rot13[j];
            
        i++;
    }

    return (s);
}
