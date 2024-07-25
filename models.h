#ifndef MODELS_H
#define MODELS_H

typedef struct 
{
    int CRN;
    double coursePrice; 
    char courseName[50];
    char courseDescription[500];
} Course;

extern Course COURSE_LIST[50];

void generateCourses(); 
void printCourses();
int courseSearch();

#endif