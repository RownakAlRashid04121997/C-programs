#include <stdio.h>
void cube(int x);
int main()
{
    int input;
    printf("Enter an integer value");
    scanf("%d",& input);
    cube(input);
    return 0;
}
void cube(int x)
{
int XCube;
XCube=x*x*x;
printf("The cube of %d is %d",x,XCube);
}

