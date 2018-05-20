#include<stdio.h>
main()
{
    int a, X, b=0, c=0;
    for(a=1; a<=5; a++)
    {
        scanf("%d", &X);
        if(X%2==0)
        {
        b++;
        printf("%d valor(es) per(es)\n", b);
        }
                else
        {
        c++;
        printf("%d valor(es) impar(es)", c);
        }
    }
}
