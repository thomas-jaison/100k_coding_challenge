#include <stdio.h>
int main(void)
{
    int m,n,o;
    printf("Enter three different nombers : ");
    scanf("%d%d%d",&m,&n,&o);
    if(m>n)
    {
        if(m>o)
        {
            printf("The largest number is : %d",m);
        }
        else{
            printf("The largest number is : %d",o);
        }
    }
    else{
        if(n>o)
        {
            printf("The largest number is : %d",n);

        }
        else{
            printf("The largest number is : %d",o);

        }
    }
    return 0;
}
