#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char str[])
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *src)
{
    char *dest;
    int i = 0;

    if(!(dest = malloc(sizeof(*dest) * ft_strlen(src) + 1)))
    {
        return NULL;
    }
    else
    {
        while(src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return dest;
}
int main()
{
    char src[] = "je suis le meilleurs";
    char* dest = ft_strdup(src) ;
    int i;


    printf("%s",dest);

    free(dest);
    
}