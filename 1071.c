#include<stdio.h>
int main()
{
    int x, y, i, temp, sum=0;
       scanf("%d %d", &x, &y);
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }

    for(i=x+1; i<y; i++)
    {
        if(i%2!=0)
            sum=sum+i;
    }
      printf("%d", sum);
      return 0;
}
