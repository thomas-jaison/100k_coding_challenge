#include <stdio.h>
int main(void)
{
    int i,n,sum=0;
    printf("Enter a limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("Sum of odd numbers is %d",sum);
    return 0;
}