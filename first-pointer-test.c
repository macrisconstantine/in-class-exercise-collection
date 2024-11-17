#include <stdio.h>

int swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}


int main() 
{
    int x=2, y=5;
    printf("x=%d-y=%d\n", x, y);
    swap(&x,&y);
    printf("x=%d-y=%d\n", x, y);
    
    return 0;
}