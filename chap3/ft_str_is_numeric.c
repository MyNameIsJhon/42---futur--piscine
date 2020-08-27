#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;


    if(str[i] == '\0')
    {
        return (1);
    }
    while(str[i] != '\0')
    {
        if(str[i] >= 0 && str[i] <= 9)
        {
            i++;
        }
        else if(str[i] == ' ')
        {
            i++;
        }
        else
        {
            return (0);
        }
        return (1);
    }
}
