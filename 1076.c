#include<stdio.h>
int main()
{
    int n, i, multi;
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        multi=i*n;
        printf("%d x %d = %d\n", i, n, multi);
    }
    return 0;
}
