#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "models.h"

int courseIndex;
Cart shoppingChart = {.total = 0.0, .courseCount = 0};

void addToCart(int CRN) {
    // Query by CRN to find the selected course from the COURSE_LIST array 
    courseIndex = courseSearch(COURSE_LIST, CRN, false);

    if (courseIndex <= 0) {
        printf("Error: Course not found. Cannot add to cart. \n");
    }
    if (shoppingChart.courseCount < 5) {
        shoppingChart.courses[shoppingChart.courseCount] = COURSE_LIST[courseIndex]; //add the course to the cart
        shoppingChart.total += COURSE_LIST[courseIndex].coursePrice; // update the total price
        shoppingChart.courseCount++; //increments amount of courses in the cart

        printf("Course added. \n");
        printf("Name: %s, Description: %s, Price: %.2f \n", 
        COURSE_LIST[courseIndex].courseName, COURSE_LIST[courseIndex].courseDescription, COURSE_LIST[courseIndex].coursePrice);
        printf("\n");
    }
    else {
        printf("Cart is full");
    }
}

void viewCart() {
    if (shoppingChart.courseCount == 0) {
        printf("Shopping cart is empty.");
    }
    else {
        for (int i=0;i < shoppingChart.courseCount; i++) {
            printf("CRN: %d, Price: %.2f, Name: %s, Description: %s\n",
            shoppingChart.courses[i].CRN, shoppingChart.courses[i].coursePrice, shoppingChart.courses[i].courseName, shoppingChart.courses[i].courseDescription);
        }
        printf("Total items in cart: %d\n", shoppingChart.courseCount);
        printf("Total price: $%.2f\n", shoppingChart.total);
    }
}


