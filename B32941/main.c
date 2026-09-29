#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(int i=0; i<=10;i++)
    {
       printf("%d\n",i);
       for(int j = 1; j<=10; j++)
       {
           printf("%d*%d\n",i,j);
           for(int k=1;k<=10;k++)
           {
               printf("%d*%d=%d\n",i,j,k,i*j*k);
           }
       }
    }

    return 0;
}
