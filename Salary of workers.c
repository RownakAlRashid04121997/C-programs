#include <stdio.h>
#include <stdlib.h>

int main()
{
   int wh1, wh2, wh3, wh4, salary=0;

   /*week 1*/

   printf("Enter the number of hours of work done in 1st week:\n");
   scanf("%d", &wh1);
   if(wh1>40){
   salary=salary+(wh1*1000)+5000;
   printf("Salary of 1st week: %d\n", salary);
   }else{
        salary=salary+(wh1*1000);
        printf("Salary of 1st week\n: %d", salary);
   }

    /*week 2*/

   printf("Enter the number of hours of work done in 2nd week:\n");
   scanf("%d", &wh2);
   if(wh2>40){
   salary=salary+(wh2*1000)+5000;
   printf("Salary of 1st two weeks: %d\n", salary);
   }else{
        salary=salary+(wh2*1000);
        printf("Salary of 1st two weeks: %d\n", salary);
   }

     /*week 3*/

   printf("Enter the number of hours of work done in 3rd week:\n");
   scanf("%d", &wh3);
   if(wh3>40){
   salary=salary+(wh3*1000)+5000;
   printf("Salary of 1st three weeks: %d\n", salary);
   }else{
        salary=salary+(wh3*1000);
        printf("Salary of 1st three weeks: %d\n", salary);
}

  /*week 4*/

   printf("Enter the number of hours of work done in 4th week:\n");
   scanf("%d", &wh4);
   if(wh4>40){
   salary=salary+(wh4*1000)+5000;
   printf("Salary of the month: %d\n", salary);
   }else{
        salary=salary+(wh4*1000);
        printf("Salary of the month: %d\n", salary);
}

return 0;
}
