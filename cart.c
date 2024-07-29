#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "models.h"

int courseIndex;
Cart shoppingCart = {.total = 0.0, .courseCount = 0};

void addToCart(int CRN)
{
    // Query by CRN to find the selected course from the COURSE_LIST array
    courseIndex = courseSearch(COURSE_LIST, CRN, false);

    if (courseIndex <= 0)
    {
        printf("Error: Course not found. Cannot add to cart. \n");
    }
    if (shoppingCart.courseCount < 5)
    {
        shoppingCart.courses[shoppingCart.courseCount] = COURSE_LIST[courseIndex]; // add the course to the cart
        shoppingCart.total += COURSE_LIST[courseIndex].coursePrice;                // update the total price
        shoppingCart.courseCount++;                                                // increments amount of courses in the cart

        printf("Course added --> ");
        printf("Name: %s, Description: %s, Price: %.2f \n",
               COURSE_LIST[courseIndex].courseName, COURSE_LIST[courseIndex].courseDescription, COURSE_LIST[courseIndex].coursePrice);
        printf("\n");
    }
    else
    {
        printf("Cart is full");
    }
}
/* This function is a bit spaghetti-fied. I realized I have some structural
 * issues with my models and the course search functionality that could be
 * entirely rewritten/overhauled to make this code (and other functions) more readable.
 */
void removeFromCart(int CRN)
{

    // Check if cart is empty
    if (shoppingCart.courseCount == 0)
    {
        printf("Cart is already empty.");
    }

    int indexToRemove = -1;
    for (int i = 0; i < shoppingCart.courseCount; i++)
    {
        if (shoppingCart.courses[i].CRN == CRN)
        {
            indexToRemove = i;
        }
    }
    // if the course is not found, print error.
    if (indexToRemove == -1)
    {
        printf("Course not found. Cannot remove. \n");
    }

    // Remove the course and update the total price
    shoppingCart.total -= shoppingCart.courses[indexToRemove].coursePrice;
    for (int i = indexToRemove; i < shoppingCart.courseCount - 1; i++)
    {
        shoppingCart.courses[i] = shoppingCart.courses[i + 1];
    }

    // Decrement the course count
    shoppingCart.courseCount--;

    printf("Course removed.\n");
}

void viewCart()
{
    if (shoppingCart.courseCount == 0)
    {
        printf("Shopping cart is empty.\n");
    }
    else
    {
        for (int i = 0; i < shoppingCart.courseCount; i++)
        {
            printf("CRN: %d, Price: %.2f, Name: %s, Description: %s\n",
                   shoppingCart.courses[i].CRN, shoppingCart.courses[i].coursePrice, shoppingCart.courses[i].courseName, shoppingCart.courses[i].courseDescription);
        }
        printf("Total items in cart: %d\n", shoppingCart.courseCount);
        printf("Total price: $%.2f\n", shoppingCart.total);
    }
}
