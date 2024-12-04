#include <stdio.h>
#include <math.h>

int main ()
{
    double income;
    printf ("Enter the your annual income to calculate tax: ");
    scanf ("%lf", &income);
    if (income<=10000 && income>=0)
    {
        printf("\nYour income level, at %.2f, " "is exempt from taxes.", income);
    }
    else if (income > 10000)
    {
        printf("\nYour income after tax is %.2f", (income - income * .2));
    }
    return 0;
}
    