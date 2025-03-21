#include <stdio.h>
#include "studentdata.h"

int main(){
    StudentData student;
    inputStudentData(&student);
    printStudentData(&student);

    printf("Hello, world!\n");

    return 0;

}