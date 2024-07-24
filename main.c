#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"

void printCourses(Course* courseList, int courseListSize) {

    for (int i=0; i < courseListSize; i++) {
        printf("CRN: %d, Price: %.2f, Name: %s, Description: %s\n",
        courseList[i].CRN, courseList[i].coursePrice, courseList[i].courseName, courseList[i].courseDescription);

    }
    // printf("size of courseList: %d:", COURSE_COUNT);
}

int main() {

    generateCourses();
    printCourses(COURSE_LIST, 50);


    return 0;
}






