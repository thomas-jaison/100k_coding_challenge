#include <stdio.h>
int main(void)
{
    int num1,num2,num3,avg;
    printf("Enter the 3 numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("The average of the three numbers is : %d",avg);
    return 0;
}