#include <unistd.h>

strlen(int *tableau)
{
    int i = 0;

    while(tableau[i] != '\0')
    {
        i++;
    }
    i++;

    return i;

}

void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int i;

	x = 0;
	while (x < size / 2)
	{
		i = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = i;
		x++;
	}


    

}