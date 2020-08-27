int ft_str_is_printable(char *str)
{
    int i = 0;

    if(str[i] == '\0')
    {
        return 1;
    }
    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
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

        return 1;
    }
}