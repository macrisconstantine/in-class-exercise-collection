#include <stdio.h>

int main()
{
    printf("Give me a char followed by a number:");
    
    char c;
    int i;
    int res=scanf("%c%d",&c,&i);
    
    printf("c=%c,i=%d,res=%d\n", c, i, res);
    
    return 0;
}   
