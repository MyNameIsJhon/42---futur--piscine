#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    
    if(str[i] == '\0')
    {
        return 1;
    }
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else if(str[i] == ' ')
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

