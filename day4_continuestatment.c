#include <stdio.h>
int main(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Hi,");
        if(i==5)
        {continue;}
        printf("Hello\n");   
    }
    printf("Finished");
    return 0;

}