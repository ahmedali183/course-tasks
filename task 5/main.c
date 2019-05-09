#include <stdio.h>
#include <stdlib.h>

int main()
{
        int r,i,y;

for(;;){
        printf("enter no of output lines=  ");
        scanf("%i",&r);

         for(i=1;i<=r;i++) //create row

         {
             for(y=1;y<=((i*2)-1);y++) //create stars(shape)
                {printf("* ");}
                 printf("\n");
          }
        }
        return 0;

}
