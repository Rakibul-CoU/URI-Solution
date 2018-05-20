#include<stdio.h>
int main()
{
    int I, J;
    for(I=1, J=7; J>=5; J-=1)
    {
        for(I=1; I<=9; I+=2)
    {
        printf("I=%d J=%d\n", I, J);
    }
    }
    return 0;
}
