int ft_iterative_power(int nb, int power)
{
    int i;
    int resultat;
    int valeur;
    
    valeur = nb;

    if(nb == 0 || power == 0)
    {
        return 1;
    }
    
    for(i = 0; i <= power ; i++)
    {
        resultat = nb * nb;
    }
    return resultat;
}