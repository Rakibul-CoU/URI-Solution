#include<stdio.h>
int main()
{
    int n, i, j, k, count;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &k);
        while((k/2)>=1)
        {
            j=k/2;
            count++;
        }
        printf("%d", count);
    }
}
