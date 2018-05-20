#include<stdio.h>
int main()
{
    int i, n, temp, x, y;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    for(i=1; ; i++)
    {
        scanf("%d%d", &x, &y);
        if(x>y)
        {
            printf("Decrescente\n");
        }
        else if(x<y)
        {
            printf("Crescente\n");
        }
        else if(x=y)
        {
            break;
        }
    }
    return 0;
}
