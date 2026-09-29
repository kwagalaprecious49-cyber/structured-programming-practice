#include <stdio.h>
#include <stdlib.h>

int main()
{
    float previous_meter_reading, current_meter_reading,unit_cost;

    printf("Enter Previous meter reading:\n ");
    scanf("%f",&previous_meter_reading);

    printf("Enter the Current meter reading:\n");
    scanf("%f",&current_meter_reading);

    printf("Enter the Unit cost");
    scanf("%f",&unit_cost);


    float consumption;
    consumption = current_meter_reading - previous_meter_reading;
    printf("The consumption is %f\n",consumption);

    float cost;
    cost = consumption * unit cost;
    printf("The cost is %f\n",cost);


    return 0;
}
