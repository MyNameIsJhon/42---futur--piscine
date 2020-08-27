#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')
        {
            str[i] = str[i] - 32;
        }
        if(i == 0)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main()
{
   char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un" ;

   ft_strcapitalize(str);
   
   printf("%s", str);

   return 0;
}