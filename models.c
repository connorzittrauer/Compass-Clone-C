#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "models.h"

Course COURSE_LIST[100];

void generateCourses() {
    COURSE_LIST[0].CRN = 460;
    COURSE_LIST[0].coursePrice = 150.0;
    strcpy(COURSE_LIST[0].courseName, "BIOS 120");
    strcpy(COURSE_LIST[0].courseDescription, "A survey of biological principles");

    COURSE_LIST[1].CRN = 364;
    COURSE_LIST[1].coursePrice = 200.0;
    strcpy(COURSE_LIST[1].courseName, "Info Architecture");
    strcpy(COURSE_LIST[1].courseDescription, "Intro to microprogramming");

    COURSE_LIST[2].CRN = 512;
    COURSE_LIST[2].coursePrice = 180.0;
    strcpy(COURSE_LIST[2].courseName, "CS 101");
    strcpy(COURSE_LIST[2].courseDescription, "Introduction to Computer Science");

    COURSE_LIST[3].CRN = 275;
    COURSE_LIST[3].coursePrice = 220.0;
    strcpy(COURSE_LIST[3].courseName, "ENG 201");
    strcpy(COURSE_LIST[3].courseDescription, "Advanced English Literature");

    COURSE_LIST[4].CRN = 389;
    COURSE_LIST[4].coursePrice = 140.0;
    strcpy(COURSE_LIST[4].courseName, "HIST 110");
    strcpy(COURSE_LIST[4].courseDescription, "World History Overview");

    COURSE_LIST[5].CRN = 490;
    COURSE_LIST[5].coursePrice = 210.0;
    strcpy(COURSE_LIST[5].courseName, "MATH 301");
    strcpy(COURSE_LIST[5].courseDescription, "Calculus II");

    COURSE_LIST[6].CRN = 675;
    COURSE_LIST[6].coursePrice = 160.0;
    strcpy(COURSE_LIST[6].courseName, "CHEM 101");
    strcpy(COURSE_LIST[6].courseDescription, "General Chemistry");

    COURSE_LIST[7].CRN = 233;
    COURSE_LIST[7].coursePrice = 190.0;
    strcpy(COURSE_LIST[7].courseName, "PHYS 202");
    strcpy(COURSE_LIST[7].courseDescription, "Physics for Engineers");

    COURSE_LIST[8].CRN = 821;
    COURSE_LIST[8].coursePrice = 170.0;
    strcpy(COURSE_LIST[8].courseName, "ART 105");
    strcpy(COURSE_LIST[8].courseDescription, "Introduction to Fine Arts");

    COURSE_LIST[9].CRN = 914;
    COURSE_LIST[9].coursePrice = 230.0;
    strcpy(COURSE_LIST[9].courseName, "PSY 101");
    strcpy(COURSE_LIST[9].courseDescription, "Fundamentals of Psychology");


}
