#include<stdio.h>
int main()
{
    int a, b, c,g, m, s, temp;
    scanf("%d%d%d", &a, &b, &c);
    g=a;
    m=b;
    s=c;
    if(g<m)
    {
        temp=g;
        g=m;
        m=temp;
    }
    if(m<s)
    {
        temp=m;
        m=s;
        s=temp;
    }
    if(s<g)
    {
        temp=s;
        s=g;
        g=temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", g, m,s, a, b, c);
    return 0;
}
