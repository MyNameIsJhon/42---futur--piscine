char ft_strstr(char *str, char *to_find)
{
    int i = 0, compteur = 0;
    int x = 0;
    char reprod[100];
    
    while(to_find[compteur] != '\0')
    {
        compteur++;
    }

    while(str[i])
    {
        if(str[i] == to_find[x])
        {
            x++
        }

        i++;
    }
}