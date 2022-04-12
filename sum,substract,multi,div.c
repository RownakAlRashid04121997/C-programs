#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int sum,sub,multi,div;
    printf("Enter the value of x and y:\n "),
    scanf("%d%d",&x,&y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;

    printf("%d%d%d%d",sum,sub,multi,div);
    return 0;
}
