#include <stdio.h>

int main(void)
{
    int a, b;
    float c, d;
    scanf("%d, %d, %*f, %f", &a, &b, &c, &d);
    printf("%d %d %0.2f", a, b, c);

    return 0;
}
