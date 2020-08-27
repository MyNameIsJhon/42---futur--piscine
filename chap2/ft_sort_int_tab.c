#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int x = 0;
    int i= 0;
    int Z;

    while(i < size)
    {
        while ( x < size - 1)
        {
            if(tab[x] < tab[x + 1])
            {
                Z = tab[x];
                tab[x] = tab[x + 1];
                tab[x + 1] = Z;


            }

            x++;
        }
        i++;
    }


}

