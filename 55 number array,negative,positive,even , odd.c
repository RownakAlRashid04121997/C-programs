
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element[55], i, sumpos=0, sumneg=0, sumeven=0, sumodd=0;
    for(i=0;i<=55;i++)
    {
        printf("Enter no. %d:\n", i+1);
        scanf("%d", &element[i]);
        if(element[i]>0)
        {
            sumpos=sumpos+1;
        }else{
             sumneg=sumneg+1;
             }
        if(element[i]%2=0)
        {
            sumeven=sumeven+1;
        }else{
             sumodd=sumodd+1;
             }
    }
    printf("Amount of positive numbers %d\n", sumpos);
    printf("Amount of negative numbers %d\n", sumneg);
    printf("Amount of even numbers %d\n", sumeven);
    printf("Amount of odd numbers %d\n", sumodd);

    return 0;
}
