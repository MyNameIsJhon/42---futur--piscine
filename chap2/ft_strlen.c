#include <unistd.h>

strlen(char *tableau)
{
    int i = 0;

    while(tableau[i] != '\0')
    {
        i++;
    }
    i++;

    return i;

}