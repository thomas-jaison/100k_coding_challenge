#include <stdio.h>
int main(void)
{
    int m;
    printf("Enter a number : ");
    scanf("%d",&m);
    if(m<0){
        printf("The number is negative");
    }
    else{
        printf("The number is positive");
    }

return 0;
}