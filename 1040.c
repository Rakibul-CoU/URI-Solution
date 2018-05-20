#include<stdio.h>
int main()
{
    float n1, n2, n3, n4, i, k, j;
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &j);
   i=(((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1));
   printf("Media: %.1f\n", i);
   if(i>7.0)
   {
       printf("Aluno aprovado.\n");
   }
   else if(i<5.0)
   {
       printf("Aluno reprovado.\n");
   }
   else if(5.0<i<6.9)
   {
       printf("Aluno em exame.\n");
      scanf("%1f", &j);
         printf("Nota do exame: %.1f\n", j);
  k=((i+j)/2);
   }
  if(j>=5.0)
  {
      printf("Aluno aprovado.\n");
  }
  else if(j<=4.9)
  {
      printf("Aluno reprovado.\n");
  }
  printf("Media final: %.1f\n", k);
}
