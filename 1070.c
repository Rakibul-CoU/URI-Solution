#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=n,j=0; ;i++)
    {
        if(i%2==1)
        {
             printf("%d\n", i);
             j++;
        }
              if(j==6)
             break;
    }

}
