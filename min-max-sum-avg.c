#include <stdio.h>

int number, sum, min, avg, max, count;

int maximum(int num) {
    if (num > max) {
        max = num;
    }
}


int minimum(int num) {
    if (num < min) {
        min = num;
    }
}

int total(int num) {
    sum = sum + num;
    
}

int average(int num) {
    avg = sum / count;
}

int main()
{
    printf("Enter a number, or enter 'done' to end: ");
    scanf("%d", &number);
    
    while (1) {
        count = count + 1;
        maximum(number);
        minimum(number);
        total(number);
        printf("Enter another number, or -1 to end: ");
        scanf("%d", &number);
        if (number = 'done'){
            break;
        }
    }
    average(number);

    printf("Max: %d", maximum(number), "Min: %d", minimum(number), 
    "Sum: %d", total(number), "Avg: %d", average(number));
}