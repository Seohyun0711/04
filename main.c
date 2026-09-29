#include <stdio.h>

int main(void)
{
    int total_seconds;
    int hour;
    int minute;
    int second;

    printf("input the second : ");
    scanf("%d", &total_seconds);

    hour = total_seconds / 3600;
    minute = (total_seconds % 3600) / 60;
    second = total_seconds % 60;

    printf("The time is %d:%d:%d\n", hour, minute, second);

    return 0;
}