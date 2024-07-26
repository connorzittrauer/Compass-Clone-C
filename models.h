#ifndef MODELS_H
#define MODELS_H

#include <stdbool.h>

// COURSE MODEL 
typedef struct {
    int CRN;
    double coursePrice; 
    char courseName[50];
    char courseDescription[500];
} Course;

extern Course COURSE_LIST[50];

void generateCourses(); 
void printCourses(Course* courseList);
int courseSearch(Course* courseList, int CRN, bool printFlag);

typedef struct  {
    Course courses[5];
    double total;
    int courseCount;
} Cart;

void viewTotal();
void addToCart(int CRN);

#endif