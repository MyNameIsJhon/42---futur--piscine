#include <stdio.h>

int ft_sqrt(int nb)
{
    int lim;
    int debut = 0;
    long int resultat;
    int i;

    lim = nb / 2;

    for(i = 0; i <= lim ; i++ )
    {
        if((i*i) == nb)
        {
            resultat = i;

            return resultat;
        }
    }
    return 0;

}

int main()
{
    int nb = 1;
    int resultat;

    resultat = ft_sqrt(nb);

    printf("%d",resultat);
}