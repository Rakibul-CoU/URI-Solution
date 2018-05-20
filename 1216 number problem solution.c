#include<stdio.h>
int main()
{
    char name[1000];
    gets(name);
    long long int d, count=0;
    double total=0.0, result;
    while(scanf("%s", &name)!=EOF)
    {
        scanf("%d", &d);
        total+=d;
        count++;
    }
    result=total/count;
    printf("%.1lf", result);
    return 0;
}
