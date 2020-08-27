#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		total_lengt(int size, char **strs, char *sep)
{
	int l;
	int i;
	int s;

	l = 0;
	i = 0;
	s = ft_strlen(sep);
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		if (i < size - 1)
			l += s;
		i++;
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		l;
	int		i;

	i = 0;
	l = total_lengt(size, strs, sep);
	if (size == 0)
	{
		if (!(tab = malloc(sizeof(char) * 1)))
			tab = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(char) * (l + 1))))
		return (0);
	tab[0] = '\0';
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	tab[l] = '\0';
	return (tab);
}
int main()
{
    char str[] = "jenesuispas un poisson";
    char bitch[] = "tu pues de la chneck";
    
    char **strs = &str;

    printf("%s", *strs);
}
