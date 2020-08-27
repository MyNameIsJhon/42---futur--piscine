#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tableau = 0;
    int i = 0;

    if(!(tableau = malloc(sizeof(int) * (max - min))))
    {
        return NULL;
        
    }
    else if(min >= max)
    {
        return NULL;
    }
    else
    {
        while(min < max)
        {
            tableau[i] = min;
            min++;
            i++;
        }
    }
    return tableau;
}
int main()
{
    int max = 15;
    int min = 7;
    int i;

    int *tableau = ft_range(min , max);

    for(i = 0; i< 5; i++)
    {
        printf("%d", tableau[i]);
    }

    free(tableau);
}