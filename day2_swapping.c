#include <stdio.h>
int main(void)
{
    int a=40,b=55,temp;

    temp=a;
    a=b;
    b=temp;
    printf("a:%d",a  "b:%d",b);/*or ("a:%d  b:%d",a,b);*/
    return 0;
}