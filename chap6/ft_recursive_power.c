int ft_recursive_power(int nb, int power)
{
    int valeur;

    if(power == 1)
    {
        return nb;
    }
    
    if( nb == 0 && power == 0)
    {
        return 1;
    }
    else
    {
        return nb * ft_recursive_power(nb , power - 1);
    }
}