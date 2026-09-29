#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price, VAT, rate, final_price;
    printf("Enter the price:");
    scanf("%f",&price);

    printf("Enter the rate:");
    scanf("%f",&rate);

    VAT = price * (rate/100);
    printf("The VAT is %f",VAT);

    final_price = price + VAT;
    printf("The final_price is %f",final_price);

    return 0;
}
