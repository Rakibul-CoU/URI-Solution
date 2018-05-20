#include<stdio.h>
int main()
{
    int n, i, x, y, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &x, &y);
        for(i=x+1; i<y; i++)
        {
            if(i%2==1)
            printf("%d", i);
            else
                printf("0");
        }
    }
}
