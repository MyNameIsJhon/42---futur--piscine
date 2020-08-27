int ft_iterative_factorial(int nb)
{
    int i;
    int valeur = 0;

    if(nb < 0)
    {
        return 0;
    }
    else if(nb == 0)
    {
        return 1;
    }

    for(i = 0; i <= nb ; i++)
    {
        valeur = valeur * i;
    }
    return valeur;
}