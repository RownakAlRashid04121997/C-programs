#include <stdio.h>
#include <stdlib.h>

int main()

    {
        int i, num;
        float element[100], sum=0, avg;
        printf("How many numbers do you want average of?\n");
        scanf("%d", &num);

        for(i=1; i<=num; i++)
        {
            printf("Enter number %d:\n", i);
            scanf("%f", &element[i]);
            sum=sum+element[i];
        }
        avg = sum/num;
        printf("Average= %f", avg);

    return 0;
}
