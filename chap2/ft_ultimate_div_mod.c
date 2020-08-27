void ft_ultimate_div_mod(int *a, int *b)
{
   int resultat, modulo;

    *a / *b = resultat;
    *a % *b = modulo;
    *a = resultat;
    *b = modulo;
}