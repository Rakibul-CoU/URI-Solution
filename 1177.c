#include<stdio.h>
int main()
{
    int n, a[1000], i,j;
    scanf("%d", &n);
    for(i=0,j=0; i<1000; i++,j++)
    {
         printf("N[%d] = %d\n", i, j);
         while(j==n) j=0;
    }

}
