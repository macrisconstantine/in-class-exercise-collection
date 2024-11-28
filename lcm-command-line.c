
#include <stdio.h>



int gcd(int a, int b)
{
    if (a<b) return gcd(b,a);
    if (b==0) return a;
    return gcd(b,a%b);
}



int main(int argc, char* argv[])
{
    printf("arguments=%d\n",argc);
    for (int i=0; i<argc; i++)
        printf("%s\n", argv[i]);

    if (argc<3) return -1; // you do not have 2 arguments
    int a,b;

    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);

    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));
    printf("lcm(%d,%d)=%d\n",a,b,a*b/gcd(a,b));
    return 0;
}