#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"
#include <stdbool.h>



int main() {

    generateCourses();
    userInterface();



    return 0;
}

void userInterface() {
    bool selecting = true;
    int option; 
   
    printf("Welcome to the Compass Management System!\n\n");
    
    while (selecting) {

        printf("Select from the following options: \n");
        printf("1. View course catalog\n");
        printf("2. Search for a course by CRN\n");
        printf("3. Add course to cart\n");
        printf("4  View Cart\n");
        printf("5. Exit \n");
        printf("> ");
        scanf("%d", &option);    

        switch (option)
        {
        case 1:
            //Pass the COURSE_LIST array from models.c
            printCourses(COURSE_LIST);
            break;
        case 2:
            //logic for course search
            int CRN; 
            printf("Enter the CRN: ");
            scanf("%d", &CRN);
            courseSearch(COURSE_LIST, CRN);
            break; 
        case 3: 
            //logic for adding course to a cart
            break;
        case 4:
            //logic for viewing cart
            break;
        case 5:
            selecting = false;
            break;
        default:
            printf("Invalid input. ");
            break;
        } 
    }
}