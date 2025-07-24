#include <stdio.h>
int main(void)
{
    float total_mark;
    printf("Enter your total mark : ");
    scanf("%f",&total_mark);
    if(total_mark>90)
    {
        printf("You have got A grade.      ");
    }
    else if(total_mark<=89&&total_mark>=80)
    {
        printf("You have got B grade.      ");
    }
    else if(total_mark<=79&&total_mark>=70)
    {
        printf("You have got C grade.      ");
    }
    else if(total_mark<=69&&total_mark>=60)
    {
        printf("You have got D grade.      ");
    }
    else if(total_mark<=59&&total_mark>=50)
    {
        printf("You have got E grade.      ");
    }
    else if(total_mark<50)
    {
        printf("You have failed.      ");
    }
    return 0;
}