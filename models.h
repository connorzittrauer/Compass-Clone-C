#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int CRN;
    double coursePrice; 
    char courseName[50];
    char courseDescription[500];
} Course;

extern Course COURSE_LIST[100];

void generateCourses(); 
