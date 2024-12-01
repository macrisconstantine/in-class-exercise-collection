#include <stdio.h>
#include <math.h>

void exercise1()
{
    float x1, x2, y1, y2;
    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);
                      // pow(x2-x1,2)+pow(y2-y1,2)
    float dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance=%.5f\n", dist);
}

void exercise2()
{
    printf("Enter elapsed seconds: ");
    int time1;
    scanf("%d", &time1);
    if (time1<=0)
    {
        printf("Number of seconds must be positive\n");
    }
    else
    {
        int seconds = time1;
        int days = seconds / (24*3600);
        seconds %=  (24*3600);
        int hours = seconds / 3600;
        seconds %= 3600;
        int minutes = seconds / 60;
        seconds %= 60;
        printf("%d days, %d hours, %d minutes and %d seconds\n", days, hours, minutes, seconds);
    }
}

void exercise3()
{
    float income1, income2;
    printf("Please enter your income: ");
    scanf("%f", &income1);
    printf("Please enter your spouse income (0 if single): ");
    scanf("%f", &income2);
    if (income1<0 || income2<0)
    {
        printf("Income should be zero or positive");
        return;
    }
    
    float tax;
    if (income2==0) // single
    {
        if (income1<=10000)
        {
            tax = 0;
        }
        else if (income1<=20000)
        {
            tax = (income1-10000)*0.2;
        }
        else
        {
            tax = (income1-20000)*0.4+2000;
        }
    }
    else  // not single
    {
        float totalincome = income1+income2;
        if (totalincome<=15000)
        {
            tax=0;
        }
        else if (totalincome<=28000)
        {
            tax = (totalincome-15000)*0.2;
        }
        else
        {
            tax = (totalincome-28000)*0.4+13000*0.2;
        }
    }
    printf("Tax=%.2f", tax);
}


int main()
{
    // runs each exercise in sequence
    exercise1();
    exercise2();
    exercise3();
    
    return 0;
}