#include <stdio.h>
#include "studentdata.h"

void printStudentData(const StudentData *student) {
    printf("\nStudent Data:\n");
    printf("Registration: %s", student->student_reg);
    printf("Name: %s", student->student_name);
    printf("School: %s", student->student_school);
    printf("Department: %s", student->student_department);
    printf("Course Code: %s", student->course_code);
    printf("Course Name: %s", student->course_name);
}