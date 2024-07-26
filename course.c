#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "models.h"

Course COURSE_LIST[50];
int COURSE_LIST_SIZE = 50; //Course List SIze Capped at 50

void generateCourses()
{
    // Create 50 courses
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

    // Additional 40 courses
    COURSE_LIST[10].CRN = 101;
    COURSE_LIST[10].coursePrice = 145.0;
    strcpy(COURSE_LIST[10].courseName, "BIO 110");
    strcpy(COURSE_LIST[10].courseDescription, "Introduction to Biology");

    COURSE_LIST[11].CRN = 102;
    COURSE_LIST[11].coursePrice = 205.0;
    strcpy(COURSE_LIST[11].courseName, "CHEM 110");
    strcpy(COURSE_LIST[11].courseDescription, "Introduction to Chemistry");

    COURSE_LIST[12].CRN = 103;
    COURSE_LIST[12].coursePrice = 165.0;
    strcpy(COURSE_LIST[12].courseName, "PHYS 110");
    strcpy(COURSE_LIST[12].courseDescription, "Introduction to Physics");

    COURSE_LIST[13].CRN = 104;
    COURSE_LIST[13].coursePrice = 225.0;
    strcpy(COURSE_LIST[13].courseName, "ENG 110");
    strcpy(COURSE_LIST[13].courseDescription, "Introduction to Engineering");

    COURSE_LIST[14].CRN = 105;
    COURSE_LIST[14].coursePrice = 135.0;
    strcpy(COURSE_LIST[14].courseName, "MATH 110");
    strcpy(COURSE_LIST[14].courseDescription, "Introduction to Mathematics");

    COURSE_LIST[15].CRN = 106;
    COURSE_LIST[15].coursePrice = 175.0;
    strcpy(COURSE_LIST[15].courseName, "CS 110");
    strcpy(COURSE_LIST[15].courseDescription, "Introduction to Programming");

    COURSE_LIST[16].CRN = 107;
    COURSE_LIST[16].coursePrice = 185.0;
    strcpy(COURSE_LIST[16].courseName, "HIST 120");
    strcpy(COURSE_LIST[16].courseDescription, "History of the World");

    COURSE_LIST[17].CRN = 108;
    COURSE_LIST[17].coursePrice = 155.0;
    strcpy(COURSE_LIST[17].courseName, "ART 110");
    strcpy(COURSE_LIST[17].courseDescription, "Art History");

    COURSE_LIST[18].CRN = 109;
    COURSE_LIST[18].coursePrice = 195.0;
    strcpy(COURSE_LIST[18].courseName, "PSY 110");
    strcpy(COURSE_LIST[18].courseDescription, "Introduction to Psychology");

    COURSE_LIST[19].CRN = 110;
    COURSE_LIST[19].coursePrice = 215.0;
    strcpy(COURSE_LIST[19].courseName, "SOC 110");
    strcpy(COURSE_LIST[19].courseDescription, "Introduction to Sociology");

    COURSE_LIST[20].CRN = 111;
    COURSE_LIST[20].coursePrice = 175.0;
    strcpy(COURSE_LIST[20].courseName, "PHIL 110");
    strcpy(COURSE_LIST[20].courseDescription, "Introduction to Philosophy");

    COURSE_LIST[21].CRN = 112;
    COURSE_LIST[21].coursePrice = 165.0;
    strcpy(COURSE_LIST[21].courseName, "CHEM 120");
    strcpy(COURSE_LIST[21].courseDescription, "Organic Chemistry");

    COURSE_LIST[22].CRN = 113;
    COURSE_LIST[22].coursePrice = 205.0;
    strcpy(COURSE_LIST[22].courseName, "BIO 130");
    strcpy(COURSE_LIST[22].courseDescription, "Microbiology");

    COURSE_LIST[23].CRN = 114;
    COURSE_LIST[23].coursePrice = 155.0;
    strcpy(COURSE_LIST[23].courseName, "MATH 120");
    strcpy(COURSE_LIST[23].courseDescription, "Linear Algebra");

    COURSE_LIST[24].CRN = 115;
    COURSE_LIST[24].coursePrice = 145.0;
    strcpy(COURSE_LIST[24].courseName, "STAT 110");
    strcpy(COURSE_LIST[24].courseDescription, "Introduction to Statistics");

    COURSE_LIST[25].CRN = 116;
    COURSE_LIST[25].coursePrice = 175.0;
    strcpy(COURSE_LIST[25].courseName, "GEOL 110");
    strcpy(COURSE_LIST[25].courseDescription, "Introduction to Geology");

    COURSE_LIST[26].CRN = 117;
    COURSE_LIST[26].coursePrice = 185.0;
    strcpy(COURSE_LIST[26].courseName, "CS 120");
    strcpy(COURSE_LIST[26].courseDescription, "Data Structures");

    COURSE_LIST[27].CRN = 118;
    COURSE_LIST[27].coursePrice = 165.0;
    strcpy(COURSE_LIST[27].courseName, "ENG 130");
    strcpy(COURSE_LIST[27].courseDescription, "Technical Writing");

    COURSE_LIST[28].CRN = 119;
    COURSE_LIST[28].coursePrice = 215.0;
    strcpy(COURSE_LIST[28].courseName, "PHYS 120");
    strcpy(COURSE_LIST[28].courseDescription, "Mechanics");

    COURSE_LIST[29].CRN = 120;
    COURSE_LIST[29].coursePrice = 135.0;
    strcpy(COURSE_LIST[29].courseName, "BIO 140");
    strcpy(COURSE_LIST[29].courseDescription, "Genetics");

    COURSE_LIST[30].CRN = 121;
    COURSE_LIST[30].coursePrice = 195.0;
    strcpy(COURSE_LIST[30].courseName, "HIST 130");
    strcpy(COURSE_LIST[30].courseDescription, "Modern History");

    COURSE_LIST[31].CRN = 122;
    COURSE_LIST[31].coursePrice = 185.0;
    strcpy(COURSE_LIST[31].courseName, "MATH 130");
    strcpy(COURSE_LIST[31].courseDescription, "Calculus III");

    COURSE_LIST[32].CRN = 123;
    COURSE_LIST[32].coursePrice = 155.0;
    strcpy(COURSE_LIST[32].courseName, "CHEM 130");
    strcpy(COURSE_LIST[32].courseDescription, "Physical Chemistry");

    COURSE_LIST[33].CRN = 124;
    COURSE_LIST[33].coursePrice = 205.0;
    strcpy(COURSE_LIST[33].courseName, "BIO 150");
    strcpy(COURSE_LIST[33].courseDescription, "Human Anatomy");

    COURSE_LIST[34].CRN = 125;
    COURSE_LIST[34].coursePrice = 165.0;
    strcpy(COURSE_LIST[34].courseName, "PHYS 130");
    strcpy(COURSE_LIST[34].courseDescription, "Electricity and Magnetism");

    COURSE_LIST[35].CRN = 126;
    COURSE_LIST[35].coursePrice = 195.0;
    strcpy(COURSE_LIST[35].courseName, "ENG 140");
    strcpy(COURSE_LIST[35].courseDescription, "Creative Writing");

    COURSE_LIST[36].CRN = 127;
    COURSE_LIST[36].coursePrice = 175.0;
    strcpy(COURSE_LIST[36].courseName, "CS 130");
    strcpy(COURSE_LIST[36].courseDescription, "Algorithms");

    COURSE_LIST[37].CRN = 128;
    COURSE_LIST[37].coursePrice = 155.0;
    strcpy(COURSE_LIST[37].courseName, "ART 120");
    strcpy(COURSE_LIST[37].courseDescription, "Painting");

    COURSE_LIST[38].CRN = 129;
    COURSE_LIST[38].coursePrice = 185.0;
    strcpy(COURSE_LIST[38].courseName, "PSY 120");
    strcpy(COURSE_LIST[38].courseDescription, "Cognitive Psychology");

    COURSE_LIST[39].CRN = 130;
    COURSE_LIST[39].coursePrice = 205.0;
    strcpy(COURSE_LIST[39].courseName, "SOC 120");
    strcpy(COURSE_LIST[39].courseDescription, "Cultural Sociology");

    COURSE_LIST[40].CRN = 131;
    COURSE_LIST[40].coursePrice = 195.0;
    strcpy(COURSE_LIST[40].courseName, "PHIL 120");
    strcpy(COURSE_LIST[40].courseDescription, "Ethics");

    COURSE_LIST[41].CRN = 132;
    COURSE_LIST[41].coursePrice = 175.0;
    strcpy(COURSE_LIST[41].courseName, "CHEM 140");
    strcpy(COURSE_LIST[41].courseDescription, "Inorganic Chemistry");

    COURSE_LIST[42].CRN = 133;
    COURSE_LIST[42].coursePrice = 185.0;
    strcpy(COURSE_LIST[42].courseName, "BIO 160");
    strcpy(COURSE_LIST[42].courseDescription, "Ecology");

    COURSE_LIST[43].CRN = 134;
    COURSE_LIST[43].coursePrice = 155.0;
    strcpy(COURSE_LIST[43].courseName, "MATH 140");
    strcpy(COURSE_LIST[43].courseDescription, "Discrete Mathematics");

    COURSE_LIST[44].CRN = 135;
    COURSE_LIST[44].coursePrice = 145.0;
    strcpy(COURSE_LIST[44].courseName, "STAT 120");
    strcpy(COURSE_LIST[44].courseDescription, "Probability");

    COURSE_LIST[45].CRN = 136;
    COURSE_LIST[45].coursePrice = 175.0;
    strcpy(COURSE_LIST[45].courseName, "GEOL 120");
    strcpy(COURSE_LIST[45].courseDescription, "Mineralogy");

    COURSE_LIST[46].CRN = 137;
    COURSE_LIST[46].coursePrice = 185.0;
    strcpy(COURSE_LIST[46].courseName, "CS 140");
    strcpy(COURSE_LIST[46].courseDescription, "Operating Systems");

    COURSE_LIST[47].CRN = 138;
    COURSE_LIST[47].coursePrice = 165.0;
    strcpy(COURSE_LIST[47].courseName, "ENG 150");
    strcpy(COURSE_LIST[47].courseDescription, "Shakespearean Literature");

    COURSE_LIST[48].CRN = 139;
    COURSE_LIST[48].coursePrice = 215.0;
    strcpy(COURSE_LIST[48].courseName, "PHYS 140");
    strcpy(COURSE_LIST[48].courseDescription, "Thermodynamics");

    COURSE_LIST[49].CRN = 140;
    COURSE_LIST[49].coursePrice = 135.45;
    strcpy(COURSE_LIST[49].courseName, "BIO 173");
    strcpy(COURSE_LIST[49].courseDescription, "Marine Biology Survey");
}

int courseSearch(Course* courseList, int CRN, bool printFlag) {

    int courseIndex = 0;

    // Search and set found course
    for (int i=0; i< COURSE_LIST_SIZE; i++) {
        if (courseList[i].CRN == CRN) {
            courseIndex = i;
        }
    }
    if (courseIndex != 0) {
        if (printFlag) {
            printf("--------------------------------------------------------------------------------\n");
            printf("CRN: %d, Price: %.2f, Name: %s, Description: %s\n",
            courseList[courseIndex].CRN, courseList[courseIndex].coursePrice, courseList[courseIndex].courseName, courseList[courseIndex].courseDescription);
            printf("--------------------------------------------------------------------------------\n");
        }
    }
    else {
        if (printFlag){
            printf("Course not found!\n");
        }
    }

    return courseIndex;
}

void printCourses(Course* courseList) {
    // Generate the courses for printing
    for (int i=0; i < COURSE_LIST_SIZE; i++) {
        printf("CRN: %d, Price: %.2f, Name: %s, Description: %s\n",
        courseList[i].CRN, courseList[i].coursePrice, courseList[i].courseName, courseList[i].courseDescription);
    }
}