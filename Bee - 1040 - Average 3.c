#include<stdio.h>
int main() {
  
  double a,b,c,d,e,r1;
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
  r1 =((a*2+b*3+c*4+d*1)/10);
  printf("Media: %0.1lf\n",r1);
  if
  (r1<5.0)
  {
      printf("Aluno reprovado.\n");
  }
  else if
  (r1>=7.0)
  {
      printf("Aluno aprovado.\n");
  }
  else
  {
      printf("Aluno em exame.\n");
  scanf("%lf", &e);
  printf("Nota do exame: %0.1lf\n",e);
  if
  ((r1+e)/2.0 >= 5.0)
  {
      printf("Aluno aprovado.\n");
  }
  else
  {
      printf("Aluno reprovado.\n");
  }
  printf("Media final: %0.1lf\n", (r1+e)/2);
  }
    return 0;
}
