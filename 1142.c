#include<stdio.h>
main()
{
    int x, i , j, k;
    scanf("%d",&x);
    for(i=1,j=2,k=3; i<=x*4; i=i+4,j=j+4,k=k+4){
        printf("%d ",i);
        printf("%d ",j);
        printf("%d ",k);
        printf("PUM\n");
    }
}
