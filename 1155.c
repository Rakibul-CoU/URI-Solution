#include <stdio.h>
main()
{
   int number=100;
   float sum=0.0, number1, number2;
   for(number2=1.0;number2<=number;number2++)
   {
       number1=1/number2;
       sum = sum +number1;
   }
   printf("%.2lf",sum);
   return 0;
}
