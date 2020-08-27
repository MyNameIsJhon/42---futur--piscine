#include <unistd.h>

int ft_print_alphabet()
{
    write(1,"abcdefghijklmnopqrstuvwxyz",26);
}
int main()
{
    ft_print_alphabet();
}