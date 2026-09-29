#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    printf("Enter the first value:");
    scanf("%d",&A);

    printf("Enter the second value:");
    scanf("%d",&B);

    printf("Enter the third value:");
    scanf("%d",&C);

    // Using else if for comparison among three values
    if (A != B)
    {
        printf("The numbers are unique\n");
    }
    else if(B != C)
    {
        printf(" The numbers are unique\n");
    }
    else
    {
        printf("The numbers are not unique\n");
    }
    return 0;
}
