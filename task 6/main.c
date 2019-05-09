#include <stdio.h>
#include <stdlib.h>

int main()
{

    int  s,i, r;
for(;;)
{         printf("enter no of output lines=  ");
          scanf("%i",&r);

          for(i=1;i<=r;i++) //create row

            {
                for(s=1; s<=r-i; s++)
                 {
                   printf("  ");
                  }
              for(int y=1;y<=((i*2)-1);y++) //create stars(shape)
                {printf("* ");}
                 printf("\n");
             }

    }
    return 0;
}
