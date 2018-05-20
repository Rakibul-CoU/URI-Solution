#include<stdio.h>
int main()
{
    int X, Y, i, temp;
    scanf("%d%d", &X,&Y);
    temp=X;
    X=Y;
    Y=temp;
    {
        int total = 0;
        for (i = Y; i <= X; i++)
        {
            if (i % 13 != 0)
            {
                total += i;
            }
        }
        printf("%d\n", total);

    }

}
