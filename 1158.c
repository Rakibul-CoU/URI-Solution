#include<stdio.h>
int main()
{
    int n, i,j,k,sum=0,x,y;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        for(j=x; ; j++)
        {

             if(x=!0)
             {
                 for(k=1; k<=y; k++)
                        x++;
             }
             sum=sum+x;
        }
        printf("%d", sum);
    }
}
