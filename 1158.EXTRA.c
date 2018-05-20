#include<stdio.h>
int main()
{
    int n, i, j, x, y, ii, sum=0;
    scanf("%d", &n);
    while(1)
    {
        for(i=1; i<=n ; i++)
        {
            scanf("%d %d", &x, &y);
            for(ii=x, j=0; ; ii++)
            {
                if(ii%2==1)
                {
                    sum=sum+ii;
                        j++;
                }
                if(j==y)
                    break;
            }
                                printf("%d", sum);
        }
    }
}
