#include<stdio.h>
#include<math.h>
int main()
{
    double m, n, i;
    double x,y,z,k,l, j,r, A, B, C;
    while(scanf("%lf %lf %lf", &m, &n, &i)!=EOF)
    {
        x=m+n+i;
        y=x/2;
        r=sqrt(y*(y-m)*(y-n)*(y-i));
        z=sqrt(((y-m)*(y-n)*(y-i))/y);
        B= 3.1415926535897*z*z;
        A=r-B;
        l=((m*n*i)/(sqrt((m+n+i)*(m+n-i)*(m+i-n)*(n+i-m))));
        j= 3.1415926535897*l*l;
        C=j-r;
        printf("%.4lf %.4lf %.4lf\n", C,A,B );
    }
    return 0;
}
