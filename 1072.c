#include<stdio.h>
int main()
{
    int n, i, j, in=0, out=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &j);
        if(j>=10 && j<=20)
        in++;
        else
            out++;

    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
