#include <stdio.h>
int main(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Hi,");
        if(i==5)
        {break;}
        printf("Hello\t");   
    }
    printf("Finished");
    return 0;

}