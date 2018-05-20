#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,r,i,k;
    while(scanf("%lf", &a)!=EOF)
    {
    scanf("%lf %lf", &b, &c);
    scanf("%lf", &d);
    while(d--)
    {
        scanf("%lf %lf", &e, &f);
        k=sin(2*(e*3.14159/180.0));
        r=((f*f*k)/9.80665)+a;
        if(b<r && r<c)
            printf("%.5lf -> DUCK\n", r);
        else
            printf("%.5lf -> NUCK\n", r);
    }
    }
}
