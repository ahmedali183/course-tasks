#include <stdio.h>
#include <stdlib.h>

void flip(int a[])
{
    int *ptr1;
    ptr1=a;

    printf("array a= \n");
    for(int i=4;i>=0;--i)
    {
        printf("%i \n",a[i]);
    }
}

int main()
{
    int a[5];
for(;;)
{
    printf("enter array of 5 elements a= \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&a[i]);}



    flip(a);
    }

    return 0;
}
