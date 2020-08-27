#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void putstr(char* str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1 , &str[i], 1);
        i++;
    }
}
int main()
{
    char *str = "salle merde";

    putstr(str);
}