#include<stdio.h>
int main()
{
    while(1)
    {
        long long int m, temp, n, i, sum=0;
        scanf("%lld %lld", &m, &n);
        if(m<=0||n<=0)
            break;
        if(m<n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        for(i=n; i<=m; i+=1)
        {
            printf("%lld ", i);
            sum+=i;
        }
        printf("Sum=%lld\n", sum);
    }
    return 0;
}
