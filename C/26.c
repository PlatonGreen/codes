#include <stdio.h>
int main(void)
{
    int a, b, h;
    scanf("%d, %d, %d", &a, &b, &h);
    printf("%0.1lf", (double)((a+b) * h / 2.0));
}
