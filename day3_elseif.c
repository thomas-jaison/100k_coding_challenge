#include <stdio.h>
int main()
{
    int num1,num2,choice;
    float result;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n 2 for subtraction \n 3 for division \n 4 for multiplication \n Please enter your choice : ");
    scanf("%d",&choice);
    if(choice==1)
    {result=num1+num2;
        printf("Result= %f",result);
    }
    else if(choice==2)
    {result=num1-num2;
    printf("Result= %f",result);}
    else if(choice==3)
    {result=num1/num2;
    printf("Result= %f",result);}
    else if(choice==4)
    {result=num1*num2;
    printf("Result= %f",result);}
    else{printf("FOOL!!!");
    }
  
    return 0;
}