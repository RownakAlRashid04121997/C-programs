#include <stdio.h>
void cube();
int main()
{
    cube();
    return 0;
}
void cube()
{
    int Xcubed,x;
    printf("Enter the value");
    scanf("%d",&x);
    Xcubed=x*x*x;
    printf("The cube of %d is %d",x,Xcubed);


}



