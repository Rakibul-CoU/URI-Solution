#include<stdio.h>

int main()
{
    long long int x,y,num, num1, sum,i, a, y1;
    while(scanf("%lld %lld", &num, &num1)!=EOF)
    {
        y=1;
        sum=0;
         y1=1;
        for(x=1; x<=num; x++)
            y=y*x;

        for(x=1; x<=num1; x++)
            y1=y1*x;
        sum=y+y1;
        printf("%lld\n", sum);
    }
    return 0;
}
