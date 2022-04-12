#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer number:");
    scanf("%d",& number);

switch(number){
case 1:
    printf("x is 1");
    break;

    case 2:
        printf("x is 2");
        break;
default:
    printf("value is unknown");
}
}
