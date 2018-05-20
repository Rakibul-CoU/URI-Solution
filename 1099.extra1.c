#include<stdio.h>
int main()
{
    int n,ii, i, x, y, j;
    scanf("%d", &n);
    for(ii=1; ii<=n; ii++)
    {
        int sum = 0;
        scanf("%d%d", &x, &y);
        if(x>y)
        {
            j = x;
            x = y;
            y = j;
        }
        for(i=x+1;i<y;i++)
        {
            if(i%2==0)
                continue;
            sum = sum + i;
        }
        printf("%d\n",sum);
    }
}
