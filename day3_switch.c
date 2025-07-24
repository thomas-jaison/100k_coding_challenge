#include <stdio.h>
 int main(void)
 {
    int choice;
    printf("1 for porotta\n 2 for mandi\n 3 for biriyani\n 4 for egg roast. Please enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:{
         printf("You have selected Porotta");
      break;}
      case 2:{
         printf("You have selected Mandi");
         break;
      }
      case 3:{printf("You have selected Biriyani");
         break;}
      case 4:{printf("You have selected Egg Roast");
      break;}
      default:{printf("ERROR!!!!");}

    }
 return 0;
}