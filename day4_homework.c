#include <stdio.h>
int main(void)
{
    int i,n,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {printf("*\t");}
        printf("\n");
    }
    return 0;
}