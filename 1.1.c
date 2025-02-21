#include <stdio.h>
int main() 
{
    int num;
    printf("Entr num: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Y.\n");
    else
        printf("N.\n");

    return 0;
}