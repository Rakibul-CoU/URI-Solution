#include<stdio.h>
int main()
{
    double x, y;
    int i;
    scanf("%lf", &x);
    for(i=0; i<100&&x!=0; i++)
    {
        printf("N[%d] = %.4lf\n",i, x);
        x=x/2;

    }
}
/**
while(x!=0)
{
    print
    x=x/2;
}
*/
