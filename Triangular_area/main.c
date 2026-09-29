#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base_triangle, height_triangle, area_triangle;
    printf("Enter the base:\n");
    scanf("%f",&base_triangle);

    printf("Enter the hieght:\n");
    scanf("%f",&height_triangle);

    area_triangle = 0.5 * base_triangle * height_triangle;
    printf("The area_triangle is %f",area_triangle);
    return 0;
}
