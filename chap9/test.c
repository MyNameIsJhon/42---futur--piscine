#define ABS(value) ((value >= 0) ? (value) : -(value))
#include <stdio.h>
int main()
{
    int valeur = (-2);
    

    printf("%d",ABS(valeur));
}