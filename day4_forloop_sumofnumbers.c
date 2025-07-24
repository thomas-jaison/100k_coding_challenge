#include <stdio.h>
int main(void)
{
    int n,i,sum=0;
    printf("Enter the number upto which sum of numbers should be finded : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of numbers upto %d = %d",n,sum);
    return 0;
}