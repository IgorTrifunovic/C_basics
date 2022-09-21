#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("You are %d year old.\n");

    // char name[20];
    // printf("Enter your name: ");
    // fgets(name, 20, stdin); // fgets is for (multiple) strings (seems it auto-accepts Enter from previous input)
    // printf("\nYour name is %s champ!\n\n", name);

    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f \n\n", num1 + num2);

    return 0;
//note to self: update practice
    // fale mi dve vezbe
}
