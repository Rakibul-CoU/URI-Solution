#include<stdio.h>
int main()
{
    int i,n, x=0, y=0,m=0, p=0;
    for(i=1; i<=5; i++)
    {
       scanf("%d", &n);
       {
           while(n%2==0)
           x++;
           printf("%d valor(es) par(es)", x);
       }
       {
        while(n%2==1){
            y++;
           printf("%d valor(es) impar(es)", y);}
       }
       {
           while(n>0)
            m++;
           printf("%d valor(es) positivo(s)", m);
       }
       {
           while(n<0)
            p++;
           printf("%d valor(es) negativo(s)", p);
       }
    }
}
