#include<stdio.h>
main()
{
    float n, i, a, b, c, avr;
    scanf("%f", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        avr=(((a*2)+(b*3)+(c*5))/(10));
        printf("%.1f\n", avr);
    }
    return 0;
}
