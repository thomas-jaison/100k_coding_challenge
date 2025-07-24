#include <stdio.h>
int main(void)
{
    float mark;
    printf("Enter your mark : ");
    scanf("%f",&mark);
    if(mark>50)
    {
        printf("You have passed the exam");
    
    }
    else 
    {
        printf("You have failed the exam");
    }
    return 0;
}