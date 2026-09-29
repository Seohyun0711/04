#include <stdio.h>

int main(void)
{
    int total_seconds;
    int minute;
    int second;

    printf("input the seconds : ");
    scanf("%d",&total_seconds);

    minute= total_seconds/60;
    second= total_seconds%60;

    printf("the time is %d:%d\n", minute, second);
    return 0;
}