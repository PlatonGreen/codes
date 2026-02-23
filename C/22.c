#include <stdio.h>

int main(void)
{
    int a1;
    int a50;
    double r;
    scanf("%d, %d", &a1, &a50);
    r=a1+a50;
    printf("%0.0lf", (r / 2 * 50));
    return 0;
}
