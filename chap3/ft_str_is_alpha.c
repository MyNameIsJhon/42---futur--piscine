#include <stdio.h>
int		ft_str_is_alpha(char *str)
{
	int x, booleen;;

	x = 1;
    booleen = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			x++;
		else if (str[x] >= 'A' && str[x] <= 'Z')
			x++;
		else if(str[x] == ' ')
            x++;
        else
			return (0);
	}
    return (1);
	
}
int main()
{
    int resultat;
    char bite[156] = "jesuisunefougere du hood 12 ";

    resultat = ft_str_is_alpha(bite);

    printf("%d",resultat);
}