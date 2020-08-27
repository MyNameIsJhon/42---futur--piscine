#include <stdio.h>

int ft_atoi(char *str)
{
    int x = 0;
    int neg = 1;
    int nb = 0;

    while(str[x] == '\t' || str[x] == '\v' || str[x] == '\n'||str[x] == '\r' || str[x] == '\f' || str[x] == ' ')
    {
        x++;
    }
    while(str[x] == '-' || str[x] == '+')
    {
        if(str[x] == '-')
        {
            neg *= -1;
        }
        x++;
    }
    
    while(str[x] >= '0'&& str[x] <= '9')
    {
        nb = nb + str[x] - '0';
        
        if(str[x+1] >= '0' && str[x+1] <= '9')
        {
            nb *= 10;
        }
        x++;
    }
    nb *= neg;

    return nb;
}



int main()
{
    char str[] = "---+--+1234ab567";
    int nombre;

    nombre = ft_atoi(str);

    printf("%d", nombre);


}