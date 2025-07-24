#include <stdio.h>
int main(void)
{
    int i,n,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        j=i*n;
        printf("%d x %d = %d \n",i,n,j);
    }
    return 0;
}