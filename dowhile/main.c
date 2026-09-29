#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    // using a do while loop to bring the menu for a given number of times
    do
    {
        printf("********** MENU **********\n");
        printf("1. Buy a bag\n");
        printf("2. Buy a perfume\n");
        printf("3. Buy a lip oil\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // using else if to handle the many conditions on the menu
        if(choice == 1)
        {
            printf("You selected a bag.\n");
        }
        else if(choice == 2)
        {
            printf("You selected a perfume.\n");
        }
        else if(choice == 3)
        {
            printf("You selected a lip oil.\n");
        }
        else if(choice == 4)
        {
            printf("Thank you for shopping!\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 4);
    return 0;
}
