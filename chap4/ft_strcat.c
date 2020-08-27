char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int x = 0;
    
    while(dest[i])
    {
        i++;
    }
    i++;
    while(src[x] != '\0')
    {
        dest[i] = dest[x];
        
        x++;
        i++;

    }
    return dest;
}