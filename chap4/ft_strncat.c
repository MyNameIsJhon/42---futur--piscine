char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int x = 0;
    
    while(dest[i])
    {
        i++;
    }
    i++;
    while(src[x] != '\0' && x < nb)
    {
        dest[i] = dest[x];
        
        x++;
        i++;

    }
    return dest;
}