#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int x;
    int b;

    printf("input number : ");
    scanf("%u", &x);

    for (b = 0; x; x >>= 1)
    {
        if (x&1)
        {
            b++;
        }
    }

    printf("The result is %d\n", b);

    return 0;
}