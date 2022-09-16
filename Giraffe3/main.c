#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    double result = num * num * num;
    return result;

    // return num*num*num    // is a shorter
}

int main()
{
    printf("Answer: %f", cube(7.0));

    // int luckyNumbers[10] = {4, 8, 15, 16, 23, 42};
    // printf("lucky numbers are: %d, %d\n\n", luckyNumbers[0], luckyNumbers[5]);

    // int unluckyNumbers[16];
    // unluckyNumbers[1] = 133;
    // unluckyNumbers[3] = 2;
    // printf("unlucky numbers are: %d, %d\n\n", unluckyNumbers[0], unluckyNumbers[2]);

    //     printf("top!\n");
    //     sayHi("Izabela", 22);
    //     printf("bottom!\n");

    //     return 0;
    // }

    // void sayHi(char name[], int age)
    // {
    //     printf("Hello %s, you are %d as it seems.\n", name, age);
}