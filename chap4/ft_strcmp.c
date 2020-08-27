#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int compteur = 0;

    while(s1[compteur] != '\0')
    {
        compteur++;
    }

    while(s1)
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            return 1;
        }
        
    }
    if(i == compteur)
    {
        return 0;
    }
}

int main()
{
    char s1[] = "salle lache";
    char s2[] = "salle lache";
    int reponse;

    reponse = ft_strcmp(s1, s2);

    printf("%d",reponse);
}