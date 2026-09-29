#include <stdio.h>

int main(void)
{
    int year;
    int result;

    printf("input the year : ");
    scanf("%d", &year);

    result = (year % 4 == 0 && year % 100 != 0)
             || (year % 400 == 0);

    printf("The result is : %d\n", result);

    return 0;
}