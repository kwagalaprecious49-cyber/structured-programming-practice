#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start_bal, fare, end_bal;
    printf("Enter payment:\n");
    scanf("%f",&start_bal);

    printf("Enter transport fare:");
    scanf("%f",&fare);


     if (start_bal<fare)
     {
         end_bal = start_bal - fare;
         printf("the remaining money is %f",end_bal);
     }
     else
        {
        printf("Have a safe journey");
     }
    return 0;
}
