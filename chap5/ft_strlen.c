#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] != '\0')
        {
            i++;
        }
        else
        {
            return i;
        }
        
    }
    return i;
}
int main()
{
    char boulette[] = "jtbz";
    int nombre;

    nombre = ft_strlen(boulette);

    printf("%d", nombre);

    return 0;
}