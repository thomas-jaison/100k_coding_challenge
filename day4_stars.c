#include <stdio.h>
int main(void)
{
    int i,n;
    for(i=1;i<=5;i++)
    {
        for(n=1;n<=i;n++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}