#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"
#include <stdbool.h>

int CRN;

int main()
{
    generateCourses();
    userInterface();

    return 0;
}

void userInterface()
{
    bool selecting = true;
    int option;

    printf("Welcome to the Compass Management System!\n\n");

    while (selecting)
    {
        printf("\n");
        printf("Select from the following options: \n");
        printf("1. View course catalog\n");
        printf("2. Search for a course by CRN\n");
        printf("3. Add course to cart\n");
        printf("4. Remove course from cart\n");
        printf("5  View Cart\n");
        printf("6. Exit \n");
        printf("> ");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            // Pass the COURSE_LIST array from models.c
            printCourses(COURSE_LIST);
            break;
        case 2:
            // logic for course search
            printf("Enter the CRN: ");
            scanf("%d", &CRN);
            courseSearch(COURSE_LIST, CRN, true);
            break;
        case 3:
            // Look up course by CRN
            // Add to cart
            printf("Enter the CRN to add course to cart: ");
            scanf("%d", &CRN);
            addToCart(CRN);
            break;
        case 4:
            // Look up course by CRN
            // Remove from cart
            printf("Enter the CRN to remove course from cart: ");
            scanf("%d", &CRN);
            removeFromCart(CRN);
            break;
        case 5:
            // logic for viewing cart
            viewCart();
            break;
        case 6:
            selecting = false;
            break;
        default:
            printf("Invalid input. ");
            break;
        }
    }
}