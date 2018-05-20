#include<stdio.h>
main()
{
    int x, y, i, n;
    for(i=1; ;i++)
    {
        scanf("%d%d", &x, &y);{
        while(x>y)
        {
            printf("Decrescente");
        }
        while(x<y)
        {
            printf("Crescente");
        }
        while(x=y)
        {
            printf(" ");
        }
        }
    }

}
