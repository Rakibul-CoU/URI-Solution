#include<stdio.h>
int main()
{
    long long int m, temp, n, i, sum=0;
    scanf("%lld %lld", &m, &n);
    if(m<n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=n; i<=m; i++)
    {
        printf("%lld ", i);
        sum=sum+i;
    }

    printf("Sum=%lld\n", sum);
    return 0;
}
