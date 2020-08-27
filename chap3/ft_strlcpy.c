#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    for(i = 0; i < size ; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
