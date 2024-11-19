#include <stdio.h>
#include <math.h>

int main()
{
    int base;
    int pwr;
    int result = 1;
    printf("Enter a number you would raise to a power: ");
    scanf("%d", &base);
    printf("Enter the exponent you would like the base raised to: ");
    scanf("%d", &pwr);
    for (int i = 1; i <= pwr; i++)
    {
        base * pwr;
    }
    printf("d\n", result);
    return 0;
}
