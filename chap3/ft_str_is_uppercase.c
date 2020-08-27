int ft_str_is_uppercase(char *str)
{
    int i = 0;
    
    if(str[i] == '\0')
    {
        return 1;
    }
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            i++;
        }
        else if(str[i] == ' ')
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[] = "je suis mzooo ";
    int sindic;

    sindic = ft_str_is_uppercase(str);

    printf("%d", sindic);

    return 0;
}