#include <unistd.h>

void affichage(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i],1);
        i++;
    }
}
int main(int argc, char **argv)
{
    int i = 1;

    while(argv[i])
    {
        affichage(argv[i]);
        write(1, "\n", 1);
        i++;
    }
}