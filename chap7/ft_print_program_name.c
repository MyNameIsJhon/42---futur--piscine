#include <unistd.h>

void affichage(char str[])
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        write(1, &str[i] ,1);

        i++;

    }
}
int main(int argc, char **argv)
{
    affichage(argv[0]);
    write(1, "\n",1);
    
}