#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number = 1;
    int total = 0;

    while(number <= 10)
    {
        total = total + number;
        number++;
    }

    printf("The total is: %d\n", total);

    return 0;
}
