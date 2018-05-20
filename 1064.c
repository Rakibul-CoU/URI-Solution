#include<stdio.h>
int main()
{
    int i, count=0;
    float avg, j, sum=0.0;
    for(i=1; i<=6; i++)
    {
        scanf("%f", &j);
      if(j>0)
      {
            sum+=j;
            count++;}
            avg=sum/(float) count;
    }
     printf("%d valores positivos\n", count);
     printf("%.1f\n", avg);
     return 0;
}
