#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i;
    
    if(nb == 0 || nb == 1)
    {
        return 2;
    }
    
    if(nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 11)
    {
        return nb;
    }
    else if(nb % 2 != 0 && nb % 3 != 0 && nb % 5 != 0 && nb % 7 != 0 && nb % 11 != 0)
    {
        return nb;
    }
    else if(nb % 2 == 0 || nb % 3== 0 || nb % 5 == 0 || nb % 7 == 0|| nb % 11 == 0)
    {
        i = nb;
        
        while(nb % 2 == 0 || nb % 3== 0 || nb % 5 == 0 || nb % 7 == 0|| nb % 11 == 0)
        {
            i++;
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0)
            {
                nb = i;
                
                return nb;
            }
        }
    }
}
int main()
{
    int a = 100000000, b;

   b = ft_find_next_prime(a);

   printf("%d", b);
}