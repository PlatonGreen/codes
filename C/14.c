#include <stdio.h>

int main(void)
{
    long int a;
    float b, c;
    scanf("%ld %f %f", &a, &b, &c);
    printf("%ld %0.2f %0.2f", a, b, c);

    return 0;
}

