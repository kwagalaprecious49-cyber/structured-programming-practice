#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("************* THE DAY OF THE WEEK ****************\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");
    printf("7. Sunday\n");

    printf("Enter the day(1-7)\n");
    scanf("%d",&day);

    // Using switch statements to choose the appropriate day for a given number
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Saturday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;
    }
    return 0;
}
