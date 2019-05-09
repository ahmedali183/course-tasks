#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(;;)
    {
    printf("enter the number you want= ");
    scanf("%i",&x);
    y=x*x;
    printf("result= %i \n",y);
    }
    return 0;
}
