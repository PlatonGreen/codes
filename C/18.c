#include <stdio.h>

int main(void)
{
    double a = 6 * ((double)1 / (double)3) * ((double)1 / (double)3) - 15 * (double)1 / (double)3;
    /* или double a = 6 * (1.0 / 3.0) * (1.0 / 3.0) - 15 * 1.0 / 3.0; */
    printf("%0.2lf", a);
    return 0;
}
