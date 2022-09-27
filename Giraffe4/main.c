#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 31;
    int *pAge = &age; // pointer variable is storing memory adress of the age var

    double gpa = 3.587;
    double *pGpa = &gpa;

    char grade = "A";
    char *pGrade = &grade;

    printf("%p, \n%p, \n%p \n\n", pAge, pGpa, pGrade);
    printf("%d, \n%f, \n%p \n\n", *pAge, *pGpa, *pGrade); // char pGrade doesnt work

    printf("%d\n", *pAge); // when we are dereferencing a pointer we are getting stored value
    printf("%p\n", &*&*pAge);

    // MEMORY ADRESSES
    // int age = 30;
    // double gpa = 3.4;
    // char grade = "A";
    // printf("Age: %p\nGpa: %p\nGrade: %p\n\n", &age, &gpa, &grade);

    return 0;
}