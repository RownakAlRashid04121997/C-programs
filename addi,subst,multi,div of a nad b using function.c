#include <stdio.h>
int addition(int X,int Y);
int substraction(int X,int Y);
int multiplication(int X,int Y);
int division(int X,int Y);

int main()
{
    int a,b;
    printf("Enter the values;\n");
    scanf("%d%d",&a,&b);
    printf("sum of %d %d is %d",a,b,addition(a,b));
    printf("substraction of %d %d is %d",a,b,substraction(a,b));
    printf("multiplication of %d %d is %d",a,b,multiplication(a,b));
    printf("division of %d %d is %d",a,b, division(a,b));
    return 0;
}
int addition(int X,int Y)
{
    return X+Y;
}
int substraction(int X,int Y)
{
    return X-Y;
}
int multiplication(int X,int Y)
{
    return X*Y;
}
int division (int X,int Y)
{
    return X/Y;
}







