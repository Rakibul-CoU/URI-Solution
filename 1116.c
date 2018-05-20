#include<stdio.h>
main()
{
    double n, i, x, y,j;
    while(1)
   {
    scanf("%lf", &n);
    j=x/y;
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf", &x, &y);
        if(x!=0 && y!=0)
            printf("%.1f\n", j);
        else if(x!=0 && y==0)
            printf("divisao impossivel\n");
        else if(x==0 && y!=0)
            printf("0.0\n");
    }
}
return 0;
}
