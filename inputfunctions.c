#include "studentdata.h"
#include <stdio.h>


void inputStudentData(StudentData *student) {
    printf("Enter student registration number: ");
    fgets(student->student_reg, sizeof(student->student_reg), stdin);

    printf("Enter student name: ");
    fgets(student->student_name, sizeof(student->student_name), stdin);

    printf("Enter student school: ");
    fgets(student->student_school, sizeof(student->student_school), stdin);

    printf("Enter student department: ");
    fgets(student->student_department, sizeof(student->student_department), stdin);

    printf("Enter course code: ");
    fgets(student->course_code, sizeof(student->course_code), stdin);

    printf("Enter course name: ");
    fgets(student->course_name, sizeof(student->course_name), stdin);
}