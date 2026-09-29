#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if (num%2==0)
    {
        // Using if else to find out which number is even and which is odd
        printf("The number is even\n");

    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
