#include <stdio.h>

int main(void)
{
    int h, w;
    scanf("%d %d", &h, &w);
    double res= (double)h / (double)w;
    printf("%0.2lf", res);
    return 0;
}
