#ifndef STUDENTDATA_H
#define STUDENTDATA_H


typedef struct {
    char student_reg[20];
    char student_name[100];
    char student_school[100];
    char student_department[100];
    char course_code[20];
    char course_name[100];
} StudentData;

typedef struct {
    char unit_code[7];
    char grade[1];
} StudentScores;

void inputStudentData(StudentData *student);
void printStudentData(const StudentData *student);

#endif