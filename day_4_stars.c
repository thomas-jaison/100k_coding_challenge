#include <stdio.h>
int main(void)
{
    int i,n,j;
    printf("Enter the number of rows of stars needed : ");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        for(n=0;n<i;n++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}