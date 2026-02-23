#include <stdio.h>

int main(void)
{
    int b1;
    int q; 
    scanf("%d, %d", &b1, &q);
    printf("%0.0lf", (double)((q * q * q * q - 1) * b1) / (q-1));
    return 0;
}
